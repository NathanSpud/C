/*
Author: NathanS
Purpose: Convert decimal value to octal values.
Date: 25/01/2022
*/
#include <stdio.h>

int main(void)
{

    //initlizaing variables
    //initilized at 1 because first remainder value will be in ones place
    //holder will track decimal value in loop without being changed
    int octal = 0, place = 1, decimal, holder;
   
   //do while loop to repeat and give octal values
    do
    {
        
        printf("\tPlease enter a number in range 0 - 511 inclusive: ");
        scanf("%d", &decimal);
        //reset variables for each iteration
        octal = 0;
        place = 1;
        holder = decimal;

        //if tree to determine if decimal meets conditions
         if ( holder < 0)
        {
            printf("\tDecimal value %d is smaller than 0.\n\tQuitting Program! !", decimal);
            break;
   
        }
        else if (holder > 511)
        {
            printf("\tDecimal value %d is larger than 511.\n\tQuitting Program! !", decimal);
            break;
        
        }

        //octal algorithim
        while ( decimal != 0)
        {

            //takes octal number and add the remainder with respect to what decimal place it is in. IE. rem 3 = 100s place.
            octal = octal + (decimal % 8) * place;
            decimal = decimal / 8;
            place = place *10;
        }

         printf("\t  Your number as octal (reversed) is: %d\n\n", octal);

    }while ( (holder >= 0 ) && (holder <= 511) );
    
    return 0;
}