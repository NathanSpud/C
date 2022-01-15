#include <stdio.h>

int myGlobal =0;


int main()
{
    int myLocalMain = 0;
    printf("global: %d, myLocal: %d", myGlobal, myLocalMain);

    //this fx can access myLocalMain and myGlobal
}

int main2()
{
    int x = 0;

    printf("global: %d, x: %d", myGlobal, x);

    return 0;
    //error if try to print myLocalMain
    //this fx can access myGlobal, x but NOT myLogcalMain
}