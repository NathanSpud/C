/*
Author: NathanS
Purpose: Calculate weekly pay
Date: 05/01/2021
Note: I thought about using a switch, but this just came natural to me.
*/
#include <stdio.h>

int main()
{
    //declaring variables for use
    float hours, taxed, gross, net;

    //use printf to ask user for input, scanf to collect with ampersand before hours, not a string
    printf("How many hours did you work this week; ");
    scanf("%f", &hours);

    //checks if user is under overtime pay (which is time in a half)
    if ( hours <= 40 )
    {
        //determines gross pay
        gross = hours * 12.00;
        //if equal or under 350 dollars, only taxed 15%
        if ( gross <= 350 )
        {
            net = gross * .85;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
        //if over 350 but equal to or less than 450, taxed 20%
        else if ( gross <= 450 )
        {
            net = gross * .80;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
        //if over 450 dollars, taxed 25%
        else 
        {
            net = gross * .80;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
    }

    //using the same tax bracket above but gross wage calculated for overtime.
    else 
    {
        gross = hours * 12.00 * 1.5;
        if ( gross <= 350 )
        {
            net = gross * .85;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
        else if ( gross <= 450 )
        {
            net = gross * .80;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
        else 
        {
            net = gross * .80;
            taxed = gross - net;
            printf("Your grosspay: $%.2f, Were taxed: $%.2f and your netpay: $%.2f\n", gross, taxed, net);
        }
    }

    return 0;
}