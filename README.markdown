# wrapper for realpath(3) system call on macOS

The `readlink` utility that is part of the GNU/Linux operating system lets you
canonicalize a filename in a shell script, e.g., `readlink -f $0`.

Unfortunately, the readlink that comes with macOS does not do that, but macOS
does provide a `realpath(3)` system call that can essentially do the same
thing. This is just a simple C wrapper around that system call.


