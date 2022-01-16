/* 
Author: NathanS
Purpose:
Date: 14/01/2022
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    /*char R[] = "test";
    char z[] = "again;
    char user[];*/

    char str1[8][100] = {"Reconnaissance", "Weaponization", "Delivery", "Exploitation", "Installation", "Command and Control", "Action and Objective", "Quit"};
    char str2[8][100] = {"R", "W", "D", "E", "I", "C", "A", "Q"};
    char user[1];
    
    int i;
    int j;

    for ( int i = 0; i<8; ++i)
    {
        printf("%s. ", str2[i]);
        for ( int j = 0; j<=0; ++j)
        {
            printf("%s.\n", str1[i]);
        }

    }

    
    printf("Use your keyboard to choose an option: ");
    scanf("%s", user);
    printf("You chose option %s.\n", user);

    


    
    //printf("\"%s\"", str1[0]); 

    //printf("Enter a letter associated with your choice: ");
    //scanf("%s", user);

    //printf("You entered the letter: %s);

    

   


    return 0;
}