/*
Author: NathanS
Purpose: Using width specifier
Date: 21/12/201
*/

#include <stdio.h>

int main()
{

    float x = 3.93267423;


    //.2 is 2 decimal placements
    printf("%.2f", x);

    //.5 5 decimal ppints but will round up if 6th decimal is 5 or greater.
    printf("\n%.5f", x);

    return 0;
}