/*
Author: NathanS
Purpose: Ask user for 5 input values, find the average
Date: 11/01/2022
*/

#include <stdio.h>


int main()
{
    float number00, average00, total00;
    int number;
    int i = 0;
    
    printf("Enter 5 whole numbers.\n");
    do
    {
        printf("Enter a number: ");
        scanf("%f", &number00);
        total00 += number00;
        ++i;

    } while (i<5);


    average00 = total00/i;
    printf("Your total is %.0f.\nYour average is %.2f.\n\n", total00, average00);





    i = 0;
    printf("Enter any 5 numbers.\n");
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        total00 += number;
        ++i;

    } while (i<5);


    average00 = total00/i;
    printf("Your total is %.2f.\nYour average is %.2f.", total00, average00);

    return 0;
}