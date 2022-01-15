/*
Author: NathanS
Purpose: Comparing strings
Date: 15/01/2022
*/

#include <stdio.h>
#include <string.h>

int main()
{

    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "B"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple")); 


        //first argument is what is being compared
        //2nd argument is what is being compared to first
        //3rd argument is how many characters are being compared too
    if (strncmp("astronomy","astro", 5) == 0);
    {
        printf("Found: astronomy");
    }

    if (strncmp("astounding","astro", 5) == 0)
    {
        printf("Found: astounding");
    }
    return 0;

}