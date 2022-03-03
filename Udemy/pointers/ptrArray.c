#include <stdio.h>

void copyString (char *to, char *from);


void main(void)
{
    char string1[] = "A string to be copied";
    char string2[50];

        copyString(string2, string1);
        printf("%s\n", string2);
}

void copyString ( char *to, char *from)
{
    while (*from) //null characteris equal to the value 0, so will jump out
    {
        *to++ = *from++; //plus plus doesnt add 1 to/update position till after statement
    }
    *to = '\0';
}