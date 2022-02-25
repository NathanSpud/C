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
#include <time.h> 

//constant declared, user only gets 5 attempts
#define EXIT 5
//global variable to track through program
int Attempts = 0;

void getString(char string[21]);
void challenge(void);
int convert(char string[21]);


int main(void)
{

    int x = 0;
    int i = 0;
    char string[21];
    
   

    //overall loop to repeat convert 
    while (Attempts != EXIT)
    {
        //calls getString --> make sure string is right size
        getString(string);


        //calls convert function, sees if string is the right code
        //returns value that is a 
        x = convert(string);
    
        
        printf("Your code: [ %s ] and has a value of: [ %d ]\n", string, x);

        //checks if code given is right
        if( x == 5183 )//5183
        {
            //gives a riddle to the user, ends the program.
            challenge();
            
        }
        else
        {
            printf("\033[0;31mThis code doesn't appear to be working!!! \033[0m\n");
            printf("\n================================\n");
        }

   
        ++Attempts;

    }
    
    if ( Attempts == EXIT)
    {
        printf("\n================================\n");
        printf("\033[0;31m!!! End of Attempts !!! \033[0m");
        exit(0);
    }

    return 0;
}



//final function to be called, however it needs to be here so it can work
void challenge(void)
{   
    srand(time(NULL));
    //generates a random number between 0 and 2
    int r; 
    r = rand() % 3; //for riddles
    int A;  
    A = rand() % 6; //for answers
    char answer[100];
    char riddle[3][100] = {
        {"Mississippi has four S’s and four I’s. Can you spell that without using S or I?"},
        {"A girl fell off a 20-foot ladder. She wasn’t hurt. How?"},
        {"What is at the end of the rainbow?"},
    };
    //Answer: She fell off the bottom rung.
    //Answer: T-H-A-T
    //Answer: The letter W.

    char AI[5][100] = {
        {"It doesn't get any better than that does it . . ."},
        {"It was decided to be so."},
        {"It doesn't fly."},
        {"AI will take over the world...."},
        {"If you think about it, 0 is infinite."},
    };
    
    printf("\033[0;35m\n\t[Riddle]: %s \033[0m", riddle[r]);
    scanf(" %[^\n]s", answer);
    printf("\n\t\033[0;93m[AI Response]\n \n\t%s \033[0m", AI[A]);

    exit(0);
}

//determines if code user entered is the right number
int convert(char string[21])
{
    
    int x = strlen(string);
    int y = x;
    int i = 0;
    int value = 0;
    
    while( i < x )
    { 
        
        value += string[i] * (y);
        --y;
        ++i;
    }
       
    return value;
}



//getString from user and determine if it is a valid size.
//also calls upon convert function so it needs to be below it.
void getString(char string[21])
{

    //char string[21];
    
    //do while loop to get a code 12-20 characters
    do
    {
        printf("Enter your code: ");
        scanf(" %[^\n]s", string);
      
        if ( strlen(string) > 11 )
        {
            if ( strlen(string) < 21)
            {   
                break;
            }
            
        }
        
        printf("\033[0;31mYour string is either too short or long, try again. \033[0m\n");
        printf("\n================================\n");
        ++Attempts;
    } 
    while (Attempts != EXIT);

    if ( Attempts == EXIT)
    {
        printf("\n================================\n");
        printf("\033[0;31m!!! End of attempts !!! \033[0m");
        exit(0);
    }
  
}