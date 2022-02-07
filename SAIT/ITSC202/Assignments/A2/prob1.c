/*
Author: NathanS
Purpose: 

•	In the folder Assignment 2, create a file called prob1.c.
•	Use loops (for/while) and if statements 
•	Use printf("*"); printf("\n"); and printf(" "); statements to complete this question.**************
•	ONLY 2 loops are allowed. They should be nested loops.

Date: 07/02/2022
*/

#include <stdio.h>

int main(void)
{

    //declare and initalize two variables to be used
    int row = 1;
    int column;


    //loop to repeat for 10 rows.
    while ( row <= 10)
    {
        
        printf("\t");

        //for loop that really tracks how many asterisks to print per row.
        //as each row has equivalent asterisk, row 0/colum 0 = 10 stars, row 1/coloumn 1 = 1 star, row 2/column 2 = 2 star
        for ( column = 1; column <= 10; ++column)
        {
            
            //this condition tracks first and last row
            if ( column == 1 || column == 10  || row == 1|| row == 10)
            {
                printf("*");
               
            }
            //tracks all rows between 1 and 10. Prints asterisk up to row number
            else if ( column < row)
            {
                printf("*");
            }
            //prints spaces for spaces after row cap.
            else
            {
                printf(" ");
            }
   
        }

        //prints to next row and updates tracker
        printf("\n");
        ++row;
        

    }

    return 0;
}