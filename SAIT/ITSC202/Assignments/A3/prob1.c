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

    //literal string variable for user input, option for menu and i is the counter for loops
    char string[40];
    char option;
    int i = 0;

  
    //printf and scanf statements to grab what function the user wants done
    printf("=======================================================\n");
    printf("Please choose an operation from the menu\n");
    printf("\t1. Reverse Titlecase\n\t2. Upper to lower case toggle\n\tq. Quit\n");

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
    



    //if-statement tree with nested loops for each respective function
    //Reverse titlecase
    if( option == '1')
    {
        //INCLUDE the space for the format specifer *facepalm*
        //the enter key is input itself, and is kept in the buffer, so the next scanf reads that
        printf("*** Enter a string length <= 40:");
        scanf(" %[^\n]",string);
        

        //checks to see if first string character is a letter
        if ( (string[i] >= 65 && string[i] <= 90 ) || ( string[i] >=97 && string[i] <=122))
        {
            //Checks to see if letter is uppercase, makes lower 
            if( string[i] <= 90)
            {
                string[i] = string[i] + 32;
                ++i; //updates to next letter
                
            }
            else if ( string[i] >= 91)
            {
                ++i;
            }
        
           
        }
        //while loop until end of string
        while( string[i] != '\0')
        {
            
            //if there is a nonletter, move to next character and make title case assessment
            if( ( (string[i] <= 64) || (string[i] >= 91 && string[i] <=96) || (string[i] >= 123) ) )
            {
                ++i;
                //if statement so that commas appropriatly accounted for
                if ( string[i-1] == 39)
                {
                    ++i;
                    if( (string[i] >= 65) && (string[i] <= 90) )
                    {
                        ++i;
                    }
                    else if( (string[i] >= 97) && (string[i] <= 122) )
                    {
                        string[i] = string[i] - 32;
                        ++i;
                    }
                }
                //if string character is not arleady lowercase, make it lowercase
                if ( (string[i] >= 65) && (string[i] <= 90) )
                {
                    string[i] = string[i] + 32;
                    ++i;
                }
                //if string is lowercase, moveon
                else if((string[i] >= 97) && (string[i] <= 122) )
                {
                    ++i;
                }
            }

            //if string is lower case, make it uppercase
           //added an extra range for explicity (not needed)
            else if( (string[i] >= 97 && string[i] <= 122) )
            {             
                string[i] = string[i] - 32;
                ++i;    
            }
            //if character is already uppercase, move onto next character
            else if ( (string[i] >= 65 && string[i] <= 90))
            {
                ++i;
            }
           
            
        }
        printf("*** Reverse Title Case: %s ***\n", string);

    }



    //Upper to Lower case toggle
    else if( option == '2')
    {
        i = 0;
        printf("*** Enter a string length <= 40:");
        scanf(" %[^\n]",string);

        //first character should start capital, this will make sure
        if( (string[i] >= 65) && (string[i] <= 90))
        {
            ++i;
        }
        else if((string[i] >= 97) && (string[i] <= 122) )
        {
            string[i] = string[i] - 32;
        }
        else
        {
            ++i;
        }
        

        //while loop until string terminates
        while (string[i] != '\0' )
        {
            //also ensures toggeling between "even" and "odd" character positions
            if ( i%2 == 1 )
            {
                if( (string[i] >= 97) && (string[i] <= 122))
                {
                    ++i;
                }
                else if((string[i] >= 65) && (string[i] <= 90) )
                {
                    string[i] = string[i] + 32;
                    ++i;
                }
                else if( (string[i] <=64) || ((string[i] >= 91) && (string[i] <= 96 ))|| (string[i] >= 123))
                {
                    ++i;
                }
            }
            //toggles everything to upper class
            else
            {
                if( (string[i] >= 97) && (string[i] <= 122))
                {
                    string[i] = string[i] - 32;
                    ++i;
                }
                else if((string[i] >= 65) && (string[i] <= 90) )
                {
                
                    ++i;
                }
                else if( (string[i] <=64) || ((string[i] >= 91) && (string[i] <= 96 ))|| (string[i] >= 123))
                {
                    ++i;
                }
            }
        }
        printf("*** UpperLowerToggle: %s ***\n", string);
    }

    
    //Quit.... this was my favourite line of the problem.
    else
    {
        printf(" Quitting. . .");
    }

    return 0;
}