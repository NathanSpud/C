/*
Author: NathanS
Purpose: use scanf
Date: 21/12/2021
*/
#include <stdio.h>


int main()
{
        char str[100];
        int i;
        
        //
        printf("Enter a value: ");
        scanf("%s %d", str, &i);

        printf("\nYou entered: %s %d", str, i);

        return 0;
}