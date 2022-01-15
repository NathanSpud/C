/*
Author: NathanS
Purpose: Using string concatenation
Date: 15/01/2022
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "my string";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatendated with %s is::::\n", myString, input);
    printf("%s", strcat(input, myString));



    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);
    printf("\nFinal destination string: |%s|", dest);

    return 0;

}   