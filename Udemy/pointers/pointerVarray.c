#include <stdio.h>
//NOT A RUNNING CODE, EXAMPLE OF POINTER VS ARRAY//MORE LIKE HOW TEHY ARE ALIKE
void copyString(char to[], char from[])
{

    int i;

    for ( i = 0; from[i] != '\0'; ++i)
    {
        to[i] = from[i];
    }
    to[i] = '\0';
}

void copyString(char *to, char *from)
{

    for ( ; *from != '\0'; ++from, ++to)
    {
        *to = *from;
    }
    to[i] = '\0';
}


