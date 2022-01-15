/*
Author: NathanS 
Purpose: Using if statements w/ user input
Date: 29/12/2021
*/

#include <stdio.h>

int main()
{
    //defined variables, user input, tracker for loop and constant
    int number, tracker;
    int house = 36; 

    do 
    {   
     
        printf("Guess the number!: ");
        scanf("%d", &number);
      
        //if user guesses house number, break loop.
        if ( number == house)
        {
            break;
        }
    
        //special if else use
        //first statement is condition
        //2nd after the ? is if statement
        //3rd after the colon is else statement
        ( number > house) ? printf("High\n") : printf("Low\n");

        tracker = tracker + 1;
        printf("%d\n", tracker);
        //doenst work as wanted yet.
    }
    while( tracker<3);


    if ( number == house)
    {
        printf("You gussed right!\n");
    }
    else
    {
        printf("Better Luck Next Time\n");
    }


    return 0;


}