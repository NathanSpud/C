/*
Author: NathanS
Purpose: Print a pattern
Date: 21/01/2022
*/

#include <stdio.h>

int main(void)
{   
    //declared int variable for rows
    int row;

    //loop to make a 8 row pattern
    for( row = 1; row < 8; ++row )
    {
        //every iteration it will tab the row
        printf("\t");
        //this sees if the row is odd. basically if it is an odd row it prints this line
        if ( row%2 == 1)
        {
            printf("*o*o*o*o*o*\n");
        }
        else //if it wasnt an odd row, the even row gets this
        {
            printf("o********o\n");
        }
    }


    return 0;
}