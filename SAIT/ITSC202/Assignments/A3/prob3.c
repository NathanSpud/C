/*
Author: NathanS
Purpose:
•	Your program should get the user to input:
o	An integer array of 6 elements
o	A character array of 6 elements
•	For both arrays, your program should print the addresses and values, both as hexadecimal numbers.
Date: 09/02/2022
*/
#include <stdio.h>


int main(void)
{
    //Declare array for binary number and char
    //include an extra element for char null character array
    //1st square bracket is like the row, 2nd column.
    //so, 2nd row determines amount, 1st  column determines number of groups
    int number[5];
    char letter[11];
    int i;
    int j = 0;


    printf("======================\n");

    //loop to to take 6 different numbers and store in array
    for ( i = 0; i <= 5; ++i)
    {
        printf("Enter integer number %d: ", (i + 1));
        scanf(" %d", &number[i]);
  
    }

    //make text red and get user input w/ spaces
    printf("======================\n ");
    printf(“\033[0;31m”); 
    printf("Enter 6 characters seperated by space: "); 
    printf(“\033[0m”);
    scanf(" %[^\n]s", letter);
    printf("======================");


    //print out column titles in yellow
    printf("================================================================\n");
    printf(“\033[0;33m”);
    printf("\n   Element \tAddress \tHexadecimal Value \Decimal Value\n"); 
    printf(“\033[0m”);


    //loop to print out data for integers
    for( i = 0; i < 6; ++i)
    {

        printf("Integer[%d]\t%p\tOx%x\t%d\n", i, &number[i] , number[i], number[i]);

    }
  
    //print out column titles in yellow for character array
    printf("================================");
    printf(“\033[0;33m”);
    printf("\n   Element \tAddress \tHexadecimal Value \tCharacter Value\n"); 
    printf(“\033[0m”);
    printf("================================================================\n");

    
    //Loop to print our charArray data
    for( i = 0; i < 12; i+=2)
    {
        printf("ArrChar[%d]\t%p\tOx%a\t%c\n", j,&letter[i],letter[i],letter[i]);
        ++j;
    }

    
    return 0;
}