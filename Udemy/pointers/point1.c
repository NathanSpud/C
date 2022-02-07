#include <stdio.h>

int main(void)
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count; //assign address of the value of count to int_pointer
    x = *int_pointer; //dereference it

    printf("counter = %i, x = %i\n", count, x);
    return 0;
}