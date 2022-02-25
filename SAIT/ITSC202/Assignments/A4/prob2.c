/*
Author: NathanS
Purpose: 
•	The program will have the following functions:
1.	getString:
    a.	Gets the user’s security code.
    b.	No return value is returned.
2.	challenge:
    a.	Prints a riddle if the user entered the correct security code
    b.	No return value or parameter
3.	convert:
    a.	Takes the user’s security code and converts it to a number using the following algorithm:
        -	The algorithm to convert the string to a number will be as follows:
        Value += character ascii value * (length of string - offset of character)
    b.	The function returns the calculated value associated with the security code.
    c.	The security code should produce a value of 5183
    -	If the code is 5183, the program should call challenge and print 1 of 3 riddles. The user will enter an answer to the riddle and get a randomly generated response.
    -	If the value is NOT 5183, the program should prompt the user, that there was an issue and allow the user a total of 5 attempts. If the code is still not correct the program will terminate.

Date: 23/02/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//constant declared, user only gets 5 attempts
#define EXIT 5
//global variable to track through program
int Attempts = 0;

void getString(char string[21]);
void challenge(void);
int convert(char string[21]);


int main(void)
{

    int x;
    char string[21];



    //overall loop to repeat convert 
    while (Attempts != EXIT)
    {
        //calls getString --> make sure string is right size
        getString(string);

        //calls convert function, sees if string is the right code
        //returns value that is a 
        x = convert(string);
        
        //checks if code given is right
        if( x == 5183)
        {
            //gives a riddle to the user, ends the program.
            challenge();
        }
        else
        {
            printf("\nThis code doesn't appear to be working!!!\n");
        }

        ++Attempts;

    }

    return 0;
}



//final function to be called, however it needs to be here so it can work
/*void challenge(void);
{


}*/

//determines code
int convert(char string[21])
{
    
    int x = strlen(string);
    int i = 0;
    int j;

    while( i < x )
    {

    }
    

    return value;
}
//


//getString from user and determine if it is a valid size.
//also calls upon convert function so it needs to be below it.
void getString()
{

    char string[21];
    
    //do while loop to get a code 12-20 characters
    do
    {
        printf("Enter your code: ");
        scanf(" %[^\n]s", string);
        printf("%d\n", strlen(string));
        if ( strlen(string) > 11 )
        {
            if ( strlen(string) < 21)
            {   
                printf("your string is good\n");
                break;
            }
            
        }

        printf("Your string is either too short or long, try again.\n");
        ++Attempts;
    } 
    while (Attempts != EXIT);

    if ( Attempts == EXIT)
    {
        printf("!!! End of attempts !!!");
        exit(0);
    }
}