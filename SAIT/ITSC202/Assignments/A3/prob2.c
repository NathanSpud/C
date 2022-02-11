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

//stdbool header files after preproccsor symbol, to use Bool function
//string header to use some string functions, particularly strlen. i could have just done a for loop and tracked the iterations until 
        // char binary[i] == '\0'
        //but i made this code and realized after I shouldnt have used it. i hope this is okay.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>




int main(void)
{
    //Declare array for binary number and size
    //include an extra element for null character
    char binary[9];
    //cause im lazy, this will be my array storing powers of, up to 2^8.
    //also correlates to the binary referencing, ie 10010011, 
    int powers[8] = {128, 64, 32, 16, 8, 4, 2, 1};
    //other variables to be used to track size, counter and etc
    bool Boolean = true; 
    int i = 0;
    int j = 0;
    int number = 0;
    int odd = 0;


    //repeating loop to enter an 8 bit binary number
    do
    {   
        //resets values for repeated loop purposes
        odd = 0;
        number = 0;
        i = 0;
        j = 0;

        //asks user for a binary number, character
        printf("==================================");
        printf("\nEnter an 8 bit binary number: ");
        scanf(" %s", &binary);

        //checks size of string.(array has 9 to fit the null character '\o', but strlen does not count that)
        if ( (strlen(binary)) != 8 )
        {
            printf("You didn't enter the correct number of digits.\n", strlen(binary));
            printf("Quitting\n");
            printf("==================================");      
            //breaks inner most loop, one one inside.
            break;
        }

      
        //checks for values other than 1 and 0, and tracks what bit was not a good bit
        while( binary[i] != '\0')
        {
             
            if ( binary[i] == '1' || binary[i] == '0')
            {
                ++i;

                continue;
            }
            else
            {
                j = 8 - i;
                printf("  >>>>Bit: %d is not a binary number ----> Quitting Program <<<<", j);
                Boolean = false;
                //only breaks inner most loop
                break;

            }
        }
        //double checks if last condition was not a 1 or 0, break most inner loop
        if( Boolean == false)
        {
            break;
        }
       
  
        //I really wanted to use the atoi function here and pow() THIS FEELS SO MUCH HARDER WITHOUT THEM.
        //nevermind, i just as an Array lol
        //converts a string with number characters in it to int data type with the numbers. (skips anything that is not a number)
        for( i = 7; i >= 0; --i)
        {
            if ( binary[i] == '1')
            {
                number = number + powers[i];
                ++odd;
            }
        }
        //prints decimal value that was just converted and uses %X to print hexadecimal value
        printf("  >>>> Decimal equivalent: %d -> Hex: 0x%X <<<<\n", number, number);


        //checks for odd and even number of 1s, and if there is no 1s.
        if(odd%2==0)
        {
            printf("  >>>> Even number of 1's <<<<\n");
        }
        else if(odd%2 ==1)
        {
            printf("  >>>> Odd number of 1's <<<<\n");
        }
        else
        {
            printf("  >>>> No ones entered <<<<\n");
        }


    } while ( (Boolean == true) );
    


    return 0;
}