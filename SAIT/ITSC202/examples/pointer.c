#include <stdio.h>

int main(void)
{

    int myVar = 1;
    int *p1 = &myVar;
    int **p2 = &p1;
    printf("%d, %d, %d, %d\n", myVar, *p1, **p2, (**p2 += 1));


    int value = 2;
    int *pvalue = &value;
    *pvalue = 4;
    printf("\n%d\n", value );

    
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count; //assign address of the value of count to int_pointer
    x = *int_pointer; //dereference it

    printf("counter = %i, x = %i\n", count, x);
    return 0;
}