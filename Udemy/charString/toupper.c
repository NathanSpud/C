/*
Author: NathanS
Purpose: Using toupper
Date 26/01/2022
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];
    char substring[40];
    int i;

    printf("Enter the string to be searched (less than %d charactrers):\n", 100);
    scanf("%s", text);
    printf("Enter the string to be sought (less than %d charactrers):\n", 40);
    scanf("%s", substring);


    printf("\nFirst string entered:\n%s\n", text);
    printf("Second string entered:\n%s\n", substring);

    for(i=0 ; (text[i]=(char)toupper(text[i])) != '\0' ; ++i);
    for(i=0 ; (substring[i]=(char)toupper(substring[i])) != '\0' ; ++i);
    printf("Second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));
    return 0;
}