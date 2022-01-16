/*
Author: Nathan S
Purpose: Ask for 5 type int and 5 type float values, find sum and average
Date: 14/01/2022
*/

#include <stdio.h>

int main()
{
    //initializing & declaring variables for int vaues
    int number = 0;
    int sum = 0;
    int average = 0;
    int i = 0;
    
    //float variables.
    float value = 0;
    float total = 0;
    float median = 0;
    float j = 0;

    //do while loop, gets 5 int values
    do
    {
        printf("Enter an int value: ");
        scanf("%d", &number);
        sum = sum + number;
        ++i;
    }
    while ( i < 5);

    //cast type float onto sum for float average
    median = (float)sum / i;  
    printf("\nThe sum is: %d.\nThe average is: %.2f.\n", sum, median);
    printf("\n");

    //do while loop, gets 5 float values
    do
    {
        printf("Enter a float value: ");
        scanf("%f", &value);
        total = total + value;
        ++j;
    }
    while ( j < 5);

    median = total / j;  
    printf("\nThe sum is: %.2f.\nThe average is: %.2f.\n", total, median);
    return 0;
}