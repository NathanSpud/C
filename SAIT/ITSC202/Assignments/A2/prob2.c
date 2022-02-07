/*
Author: NathanS
Purpose: Print a pattern
Date: 07/02/2022
*/

#include <stdio.h>

int main(void)
{   
    //declared int variable for rows
    int row;
    int column = 0;

    //loop to make a 8 row pattern, tracks what row
    for( row = 1; row < 8; ++row )
    {
        //every iteration it will tab the row
        printf("\t");
        
        //loop to decide what get's printed in each row
        while( column <= 10)
        {
            //if row is odd, follow this pattern
            if( row%2 == 1)
            {   
                //if column is odd, print a start and update column
                if ( column%2 == 0)
                {
                    printf("*");
                    ++column;
                }
                //if coloum is even, print this
                else if( column%2 == 1)
                {
                    printf("o");
                    ++column;
                }
            }

            //if row is even follow this pattern
            else if ( row%2 == 0)
            {
                
                if( column >= 1 && column <= 9)
                {
                    printf("*");
                    ++column;
                }
                else
                {
                    printf("o");
                    ++column;
                }
            }
          

        }
        //reset column counter and print to next line
        column = 0;
        printf("\n");
    }


    return 0;
}