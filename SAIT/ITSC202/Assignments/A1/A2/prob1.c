/*
Author: NathanS
Purpose: Print a pattern
Date: 19/01/2021
*/

#include <stdio.h>

int main(void)
{

    int row =0;
    int asterisk = 0;
    int spaces = 0;

    int i, j;


    //start printing a box of 10 width
    printf("**********\n");
    
    
    spaces = 10 - row;

    for( i = 0; i < 10; ++i)
    {

        asterisk = 0;
        row = row + 1;

         switch (Today)
    {
        case (asterisk == row):
            printf("        *\n");
            break;
        case (asterisk == row):
            printf("        *\n");
            break;
        case (asterisk == row):
            printf("       *\n");
            break;
        case (asterisk == row):
            printf("      *\n");
            break;
        case (asterisk == row):
            printf("     *\n");
            break;
        case (asterisk == row):
            printf("     *\n");
            break;
       case (asterisk == row):
            printf("   *\n");
            break;
        case (asterisk == row):
            printf(" *");
            break;
        case (asterisk == row):
        printf("*")
        default:
            printf("**********\n");
            break;
    }


        while( asterisk < row)
        {
            printf("*");
            asterisk = row + 1;
        }



    




    }

    
    return 0;
}



int 