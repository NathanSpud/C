/*
Author: NathanS
Purpose: 
•	Your program should ask the user for a string of length 40 maximum.
•	Your program should ask if the user wants to title case or capitalize the input 
•	Your program should convert the user’s input to reverse Title case OR Title case; based on user choice
•	The user should be able to enter any character on the keyboard and have the program ONLY modify letters of the alphabet.
•	If reverse Title case is chosen, chosen all except the first letter of each word will become uppercase.
    o	Notice that the first character of each word is never capitalized.
•	If title case is chosen all except the first letter of each word will become lowercase. This means if the first letters of each word are already uppercase they will remain so
Date: 30/01/2022
*/
#include <stdio.h>

int main()
{


    char string[40];
    char option;
    int i = 0;


    //printf and scanf statements to grab what function the user wants done
    printf("=======================================================\n");
    printf("Please choose an operation from the menu\n");
    printf("\t1. Reverse Titelcase\n\t2. Upper to lower case toggle\n\tq. Quit\n");

    //do while loop asking for 1 of the 3 available choices
    do
    {

        printf("\n\tEnter choice: ");
        scanf("%c", &option);
        if ( (option != '1') && ( option != '2') & ( option != 'q') )
        {
            printf("\t***** NO SUCH OPTION IN MENU!!! Please try again!!!*****\n");
        }
    }
    //if one of the 3 conditions are false, loops breaks, if not, continues
    while( (option != '1') && (option != '2') && (option != 'q'));
    
    //if tree with nested loops for each respective function
    //Reverse titlecase
    if( option == '1')
    {
        printf("Enter a string length <= 40: ");
        scanf("%[^\n]",&string);
    
    
        /*while( string[i] != '\0')
        {
            printf("\n%c", string[i]);
            string[i] = string[i] - 32;
            printf("%c", string[i]);
            ++i;
        }*/

    }
    //Upper to Lower case toggle
    else if( option == '2')
    {
        printf("Enter a string length <= 40: ");
        scanf("%s", string);


    }
    //Quit
    else
    {
        printf(" Quitting. . .");
    }
    

    //testing input
    printf("\n%s and %d and %d", string, string[1], string);



    return 0;
}