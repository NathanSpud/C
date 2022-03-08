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
    //printf("String = %s, addy = %p, %p\n", str ,str, (void*)&str);
    printf("String = %s,\t Malloc = %p, %p\n", str ,malloc, (void*)&str);

    //realloc
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    //printf("String = %s, addy = %p, %p\n", str ,str, (void*)&str);
    printf("String = %s,\t Realloc = %p, %p\n", str ,realloc, (void*)&str);
    printf("\n Main Function: %p", main);   
    free(str);
    return 0;
}
/*
str stored on heap, or stored on stack and references data on the heap?
malloc and realloc stored on heap?

where are their addresses

base address of main is 00
malloc c0
realloc e0
32 byte difference?

why is linux different than windows when it comes to memory allocation?

where is str in comparison too all of this?

layers???????

"Something i'd like to clarify:  about memory addr of a function
when we say addr of a function, this is where the "instructions" are stored right ?"

then as a follow up,
user defined functions would get stored on the stack (unless we use malloc) ?
if we use malloc, then they get stored on the heap ?
why would we want to do either ?
or do they get stored in some other location entirely
*/