#include <string.h>
#include <stdio.h>
#include <cs50.h>


//American Express( AMEX ) --> 15 digits and starts with 34 or 37
//Mastercard (MASTERCARD) --> 16 digits and starts with 51,52,53,54 or 55
//Visa (VISA) --> 13/16 digits and starts with 4

//Luhn's Algorithm -
//Multiply every other digit by 2, starting with the second number to the last
//Add the sum of those digits
//Add the sum of the other digits
//If the total sum ends with a 0 it is valid.



int main(void)
{


    //Global variables
    char Str[17];
    int i;



    //Promps and defines an input needed from user
    printf("Verfiy Credit: ");
    //takes a type of input from the user.
    //%s takes string input from user and stores it in Str variable
    scanf("%s", Str);





  
    //strnlen calculates the length of a given string. The strlen() function is defined in string.h header file.
    //Assigns x variable as the length value of the Str
    int x = strlen(Str);





    //checks if valid credit length
    if (x == 15 || x == 13 || x == 16)
    {


        //checks to see if possible AMEX card
        if (x == 15)
        {

            if (Str[0] == '3' && (Str[1] == '4' || Str[1] == '7'))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }   



        //vis or master
        else if (x == 16)
        {

            if (Str[0] == '5' && (Str[1] == '1' || Str[1] == '1' || Str[1] == '2' || Str[1] == '3' || Str[1] == '4' || Str[1] == '5'))
            {
                printf("MASTERCARD\n");
            }


            else if (Str[0] == '4')
            {
                printf("VISA\n");
            }

            else
            {
                printf("INVALID\n");
            }
        }



        //possible visa
        else if (x == 13)
        {


            if (Str[0] == '4')
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }

        }
    }
    else
    {
        printf("INVALID\n");
    }







}
