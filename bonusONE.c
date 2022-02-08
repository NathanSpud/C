/*
Author: NathanS
Purpose: Print a pattern that resembles the problems
Date: 19/01/2021
*/

#include <stdio.h>

int main(void)
{

    //declaring local variables
    int row, asterisk;



    //start printing a box of 10 width, 1st row of 10
    printf("\t* * * * * * * * * *\n");
    

    //setting a loop to make 8 rows worth of asterisk 
    for( row = 1; row < 9; ++row)
    {
        //resets asterisk count every iteration, and tabs the rows
        asterisk = 0;
        printf("\t");

        //while loop that prints how many asterisks are in each row
        //simple equation, row value = asterisk count
        while( asterisk < row)
        {
            printf("* ");
            asterisk += 1;
            
        }
        

        //set of if statements to establish spaces and last star
        if (row == 1)
            printf("                *\n");

        if (row == 2)
            printf("              *\n");
         
        if (row == 3)
            printf("            *\n");
       
        if (row == 4)
            printf("          *\n");
            
        if (row == 5)
            printf("        *\n");
           
        if (row == 6)
            printf("      *\n");
          
       if (row == 7)
            printf("    *\n");
        
        if (row == 8)
            printf("  *");
            
        if (row == 9)
            printf("*");
        
            
            


    




    }

    //last row of 10 asterisk
    printf("\n\t* * * * * * * * * *");
    return 0;
}


