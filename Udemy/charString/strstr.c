/*
Author:NathanS
Purpos: uUsing strstr
Date: 26/01/2022
*/
#include <stdio.h>
#include <string.h>

int main(void)
{

    //char arrays to have strings
    char text[] = "Every dog has his day";
    char word[] = "dog";
    //Initliazing pointer varaible as type char
    char *pFound = NULL;
    pFound = strstr(text, word);
    

    printf("%s", pFound);

    return 0;
}

