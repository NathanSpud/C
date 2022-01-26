/*
Author: NathanS
Purpose: STRTOK example
Date: 26/01/2022
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "Hello how are you - my name is - Nathan";
    const char s[2] = "-";
    char *token;

    /* get the first token */
    token = strtok(str, s);

    /*walk through the other tokens*/
    while ( token != NULL)
    {
        printf(" %s\n", token);
        token = strtok(NULL, s);
    }


    return 0;
}