/*
Author: NathanS
Purpose: Example from class
Date: 15/01/2022
*/

#include <stdio.h>

int main(void)
{
    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";
    unsigned int count = 0; //stores string length

    while ( str1[count] != '\0')
    {
        ++count;
    }

    printf("The length of the string \"%s\" is %d characters. \n", str1, count);

    count = 0; //reset count for next string

    while ( str2[count] != '\0')
    {
        ++count;
    }
    printf("The length of the string \"%s\" is %d characters. \n", str2, count);

    return 0;
}