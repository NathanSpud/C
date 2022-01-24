/*
Author: NathanS
Purpose: Print a pattern
Date: 21/01/2022
*/

#include <stdio.h>

int main(void)
{   

    int row;

    for( row = 1; row < 8; ++row )
    {
        printf("\t");
        if ( row%2 == 1)
        {
            printf("*o*o*o*o*o*\n");
        }
        else
        {
            printf("o********o\n");
        }
    }


    return 0;
}