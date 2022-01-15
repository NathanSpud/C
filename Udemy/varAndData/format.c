/*
Author: NathanS
Purpose: Using Format specifiers
Data: 21/12/2021
*/

#include <stdio.h>

int main()
{

    //initializing and declaring variables
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    //bool is c11 standard
    _Bool boolVar = 0;


    //displaying functions and using their respective format specifiers
    printf("integerVar = %i\n", integerVar);
    printf("floatVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    
    //printing multiple variables, one line of code.
    printf("integerVar= %i, floatVar= %f, doubleVar= %e, doubleVar= %g, charVar= %c, boolVar= %i\n", integerVar, floatingVar, doubleVar, doubleVar, charVar, boolVar);

    return 0;
}