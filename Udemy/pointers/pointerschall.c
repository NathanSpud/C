#include <stdio.h>

int main(void)
{
    int x = 20;
    int *px = NULL;

    px = &x;

    //%p for print, void to negate error and & for address
    printf("Address of pointer: %p\n", (void*)&px);
    printf("Address of x: %p\n", &x);

    //%p because value of a pointer is an address
    printf("Value of pointer: %p\n", px);

    //%d because value is int, and * to dereference
    printf("Value of what it is pointing to: %d\n", *px );

    return 0;
}