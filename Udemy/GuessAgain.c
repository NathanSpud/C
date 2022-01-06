/*
Author: NathanS
Purpose: Guess a number randomly generated
Date: 05/01/2021
*/
#include <stdio.h>

int main()
{
    int number;
    int tracker =5;
    int random = 15;

    printf("Guess my number!\n");   
    //guess a number 0 picked between 1-20
    do
    {
        //Tells user how many tries they have left
        printf("You have %d tries left.\n", tracker);
        
        //gets user guess
        printf("Enter a guess now: ");
        scanf("%d", &number);

        //if user gets the correct number this will break the loop
        if ( number == random)
        {
            break;
        }
        
        //if user cannot guess number after 5 tries this will track it and break the loop
        tracker--;
    } 
    while (tracker != 0);
    
    
    ( number == random ) ? printf("You guessed right!") : printf("Better luck next time");

    return 0;
}