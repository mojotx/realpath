#ifndef MAJ_COLOR_H
#define MAJ_COLOR_H

#define BLACK   "\e[01;30m"
#define RED     "\e[01;31m"
#define GREEN   "\e[01;32m"
#define YELLOW  "\e[01;33m"
#define BLUE    "\e[01;34m"
#define MAGENTA "\e[01;35m"
#define CYAN    "\e[01;36m"
#define WHITE   "\e[01;37m"
#define NORMAL  "\e[0m"

#if 0
void test_colors( void )
{
    puts( BLACK   "BLACK"   NORMAL );
    puts( RED     "RED"     NORMAL );
    puts( YELLOW  "YELLOW"  NORMAL );
    puts( GREEN   "GREEN"   NORMAL );
    puts( BLUE    "BLUE"    NORMAL );
    puts( MAGENTA "MAGENTA" NORMAL );
    puts( CYAN    "CYAN"    NORMAL );
    puts( WHITE   "WHITE"   NORMAL );
    puts( NORMAL  "NORMAL"  NORMAL );
}
#endif


#endif /*  MAJ_COLOR_H */
