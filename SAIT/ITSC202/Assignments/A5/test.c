#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str = NULL;
    printf(" %p\n", (void*)&str);
    //initial
    str = (char *)malloc(15*sizeof(char));
    strcpy(str, "nathan is a ba");
    printf("String = %s, Addy = %p, %p\n", str ,malloc, (void*)&str);

    //realloc
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Addy = %p, %p\n", str ,realloc, (void*)&str);
    printf("\n Function: %p", main);   
    free(str);
    return 0;
}
/*
base address of main is 00
malloc c0
realloc e0
32 byte difference?

where is str in comparison too all of this?
*/