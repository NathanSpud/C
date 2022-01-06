/*
Author: NathanS
Purpose: Print out users input.
Date: 21/12/2021
*/
#include <stdio.h>

int main()
{
    //string array
    char str[100];
    //creating an integer
    int i;

    printf("Enter a value: ");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d:::::%s\n", i, str);

    return 0;       
}