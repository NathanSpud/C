/*
Author: NathanS
Purpose: 
1.	You must use an array to store the entered binary number.
2.	Your program should store an 8-bit binary number as a character array. 
a.	If the number of digits entered is more than or less than 8 your program should quit. Let the user know why the program quit.
3.	Your program will calculate and print the decimal equivalent and also print the hexadecimal value associated with the binary value.
4.	You must test each bit that is entered so that the user can only enter a ‘0’ or ‘1’ and exits if the user enters other numbers.
5.	Finally determine if there’s an even or odd number of 1’s entered and print that information.
Date: 04/02/2022
*/

#include <stdio.h>

int main(void)
{
    //Declare array for binary number and size
    //include an extra element for null character
    char binary[9];
    //other variables to be used to track size, counter and etc



    do
    {
        //Asks user for their binary number to be converted
        printf("========================================\n");
        printf("Enter an 8 bit binary number: ");
        scanf(" %[^a-zA-z]", &binary);

        //loop to check size and also check for other conditions
        //will simultaneously check for digits not 1/0 and conver to hex
        while( size != )

    } while (/* condition */);
    

    return 0;
}