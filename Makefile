CFLAGS=-O2  -Wall -Wextra -fstack-protector -fstack-protector-all -pipe -DCOMPILE_DATE="\"$(shell date +'%b %d %Y %H:%M:%S %Z' )\""
RM=rm -rvf

# Where to install binary
DESTDIR=$(HOME)/bin
SRCS=realpath.c realpath_version.c
#SRCS=realpath_version.c
OBJS=$(SRCS:.c=.o)

.PHONY: all

all: realpath

realpath_version.c: mk-files.sh
	./mk-files.sh

realpath_version.h: mk-files.sh
	./mk-files.sh

install: realpath
	@test -d $(DESTDIR) || mkdir -vp $(DESTDIR)
	@install -m 0700 -p -S -s -v realpath $(DESTDIR)

realpath: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	@echo "Cleaning..."
	@$(RM) realpath core a.out realpath.dSYM
	@$(RM) $(OBJS)
	@$(RM) realpath_version.[ch]


realpath.o: realpath.c realpath_version.h colors.h

realpath_version.o: realpath_version.c realpath_version.h
