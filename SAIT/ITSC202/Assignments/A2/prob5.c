/*
Author: NathanS
Purpose: Convert decimal value to octal values.
Date: 25/01/2022
*/
#include <stdio.h>

int main(void)
{

    //initlizaing variables
    int octal = 0;
    //initilized at 1 because first remainder value will be in ones place
    int place = 1;
    int decimal;

    //ask user for an integer between 0-511
    printf("Please enter a number in range 0 - 511 inclusive: ");
    scanf("%d", &decimal);

    //if tree to determine if decimal meets conditions
    if ( decimal < 0)
    {
        printf("Decimal value %d is smaller than 0.\nQuitting Program! !", decimal);
   
    }
    else if (decimal > 511)
    {
        printf("Decimal value %d is larger than 511.\nQuitting Program! !", decimal);
        
    }
    else
    {
            //octal algorithim
        while ( decimal != 0)
        {

            //takes octal number and add the remainder with respect to what decimal place it is in. IE. rem 3 = 100s place.
            octal = octal + (decimal % 8) * place;
            decimal = decimal / 8;
            place = place *10;
        }

         printf("Your number as octal (reversed) is: %d", octal);
    }
    

    return 0;
}