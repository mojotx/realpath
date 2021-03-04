#ifndef MAJ_COLOR_H
#define MAJ_COLOR_H

#define BRIGHT  "\e[1m"
#define BLACK   "\e[30m"
#define RED     "\e[31m"
#define GREEN   "\e[32m"
#define YELLOW  "\e[33m"
#define BLUE    "\e[34m"
#define MAGENTA "\e[35m"
#define CYAN    "\e[36m"
#define WHITE   "\e[37m"
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
