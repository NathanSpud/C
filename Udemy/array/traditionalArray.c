/*
Author: NathanS
Purpose: Making a traditional array w/ loop
Date: 06/01/2021
*/
#include <stdio.h>

#define month 12

int main()
{
    int days[month] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for ( index = 0; index < month; index++)
    {
        printf("Month %d has %2d.\n", index +1, days[index]);
    }

    return 0;
}