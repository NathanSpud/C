/*
Author: NathanS
Purpose: Experimenting with static variobles
Date: 04/03/2022
*/
#include <stdio.h>
#include <string.h>

void functionA(void);
void functionB(void);

void main()
{
    //for loop to call functionA 5 times
    for ( int i = 0; i < 5; i++)
    {
        functionA();
    }

    printf("\n");
    //for loop to call functionB 5 times and see the effect of the static variable
    for ( int j = 0; j < 5; j++)
    {
        functionB();
    }


    
}

void functionA(void)
{

    int value = 100;
    printf("[funA] The value now is: %d\n", value);

    value += 1;
}

void functionB(void)
{

    static int value = 100;
    printf("[funB] The value now is: %d\n", value);

    value += 1;
}