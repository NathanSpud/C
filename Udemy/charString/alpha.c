/*
Author: NathanS
Purpose: Anaylzing strings
Date: 26/01/2022
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{   

    char buff[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;
    int i = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buff);

    
    while(buff[i])
    {
        if(isalpha(buff[i]))
            {
                ++nLetters;
            }
        else if (isdigit(buff[i]))
            {
                ++nDigits;
            }
        else if (ispunct(buff[i]))
            {
                ++nPunct;
            }
        ++i;
    }

    printf("\nYour string contained %d letter, %d digits and %d punctation characters.\n", nLetters, nDigits, nPunct);


    return 0;
}