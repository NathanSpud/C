/* 
Author: NathanS
Purpose:
Date: 14/01/2022
*/

#include <stdio.h>
#include <string.h>

int main(void)
{

    //character strings with array dimension 2
    //can have 8 words, with length 100
    char str1[8][100] = {"Reconnaissance", "Weaponization", "Delivery", "Exploitation", "Installation", "Command and Control", "Action and Objective", "Quit"};
    char str2[8][100] = {"R", "W", "D", "E", "I", "C", "A", "Q"};
    char user[1];
    
    //declare and initiliaze variables for tracking
    int i;
    int j;

    //for loop and next for loop, prints letter than the associated word
    for ( int i = 0; i<8; ++i)
    {
        printf("  %s.  ", str2[i]);
        for ( int j = 0; j<=0; ++j)
        {
            printf("%s.\n", str1[i]);
        }

    }

    //asks user for a letter, prints their selection, then quits the program.
    printf("Use your keyboard to choose an option: ");
    scanf("%s", user);
    printf("You chose option %s.\n", user);
    printf("Thanks for accessing the program .. Quitting! ! !");

    return 0;
}