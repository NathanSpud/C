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


     printf("========================================================\n");

    //loop to to take 6 different numbers and store in array
    for ( i = 0; i <= 5; ++i)
    {
        printf("Enter integer number %d: ", (i + 1));
        scanf(" %d", &number[i]);
  
    }


    //make text red and get user input w/ spaces
    //learned https://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c
    printf("========================================================\n");
    printf("\033[0;31mEnter 6 characters seperated by space: \033[0m");
    scanf(" %[^\n]c", &letter);
    printf("========================================================");


    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //******I didnt have time to figure this out, however after this portion of code, number[0] becomes zero. and I dont know why
    //affects my loop to print out values
  


    //print out column titles in yellow
    //learned https://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c
    printf("\n========================================================");
    printf("\033[0;33m\n   Element \tAddress \tHexadecimal Value \tDecimal Value\n\033[0m");



    //loop to print out data for integers
    for( i = 0; i < 6; ++i)
    {

        printf("Integer[%d] \t%p \t0x%x \t \t \t %d\n", i, &number[i] , number[i], number[i]);

    }
  
    //print out column titles in yellow for character array
    //learned https://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c
    printf("================================================================");
    printf("\033[0;33m\n   Element \tAddress \tHexadecimal Value \tCharacter Value\n\033[0m");
    printf("================================================================\n");

    
    //Loop to print our charArray data
    for( i = 0; i < 12; i+=2)
    {
        printf("ArrChar[%d] \t%p \t0x%X \t \t \t %c \n", j,&letter[i],letter[i],letter[i]);
        ++j;
    }

    
    return 0;
}