#ifdef __APPLE__
#define _DARWIN_BETTER_REALPATH
#endif
#include <stdio.h>
#include <sys/param.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "realpath_version.h"
#include "colors.h"

static void usage(const char *pn);

int main( int argc, char *argv[] )
{
    int rc=EXIT_SUCCESS;
    char *resolved;

    if (argc < 2) {
        usage(argv[0]);
        rc=EXIT_FAILURE;
    }
    else
        for (int i=1; i<argc; ++i) {

            if ( argv[i][0] == '-' ) {
                usage(argv[0]);
                rc=EXIT_FAILURE;
                break;
            }
            else {

                if ((resolved=realpath( *(argv+i), 0 ))) {
                    puts( resolved );
                    free( resolved );
                }
                else {
                    fprintf( stderr, "Error calling realpath(\"%s\"):  %s\n", *(argv+i), strerror(errno) );
                    rc=EXIT_FAILURE;
                    usage( argv[0] );
                    break;
                }
            }
        }

    return rc;
}

static void usage(const char *pn)
{
    printf( CYAN "realpath %s\e[0m\n" NORMAL, build_git_version );
    printf( BLACK "compiled on %s\n" NORMAL, build_git_time );
    printf( BLACK "commit SHA: %s\n" NORMAL, build_git_sha );
    putchar( '\n' );
    printf("Usage: %s <filename> [ <filename2> ... ]\n", pn);
}
