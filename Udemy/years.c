/*
Author: NathanS
Purpose: Get user input in minutes, convert to days then years
Date: 29/12/2021
*/
#include <stdio.h>

int main()
{   
    //double data type for large data, and float properties.
    double minutes, days, years;

    //getting users input for covnersion.
    printf("How manys minutes would you like converted?");
    scanf("%lf", &minutes);

    days = minutes / (60*24);
    years = days / 365;

    printf("\nYou entered %lf minutes,\nwhich is %.3lf days\nand %.3lf years.", minutes, days, years);



    return 0;
}