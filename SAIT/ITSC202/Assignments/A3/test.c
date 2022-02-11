#include <stdio.h>


#define Color_Red "\33[0:31m\\]" // Color Start
#define Color_end "\33[0m\\]" // To flush out prev settings
#define LOG_RED(X) printf("%s %s %s",Color_Red,X,Color_end)

int main(void)
{
    printf("\033[22;34mHello, world!\033[0m");
    return 0;
}