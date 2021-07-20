#!/bin/sh

set -o errexit

echo "Creating ${PROJ}_version.c and ${PROJ}_version.h files..."

GIT_SHA="$(git rev-parse HEAD)"
GIT_VER="$(git describe --abbrev=4 --dirty --always --tags)"
PROJ="realpath"

(
    echo "/* ${PROJ}_version.h */"
    echo "#ifndef ${PROJ}_VERSION_H"
    echo "#define ${PROJ}_VERSION_H"
    echo

    echo "extern const char * build_git_time;"
    echo "extern const char * build_git_sha;"
    echo "extern const char * build_git_version;"
    echo
    echo "#endif /* ${PROJ}_VERSION_H_ */"
) >&${PROJ}_version.h

#echo "-------------------------------------------------------------"

(
    echo "/* ${PROJ}_version.c */"
    echo "#include \"${PROJ}_version.h\""
    echo "const char * build_git_sha = \"${GIT_SHA}\";"
    echo "const char * build_git_time = COMPILE_DATE ;"
    echo "const char * build_git_version = \"${GIT_VER}\";"

) >&${PROJ}_version.c

#ls -laF ${PROJ}_version.c ${PROJ}_version.h

