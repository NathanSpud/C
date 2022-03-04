#include <stdio.h>

int main(void)
{

    int number = 0;
    int *pnumber = NULL; //declare a pointer that can point to type int


    number = 10;
    pnumber = &number; // return address of value of number, hexadecima lform
    
    //output address of number value (10)
    printf("pnumber's value: %p\n", pnumber);

    //print address of number of value
    printf("number's address: %p\n", &number);

    //use void* to prvenet possible warning from compiler
    printf("pnumber's address: %p\n", (void*)&pnumber);

    //cast to size of as size_t is an implemenation of defined interger type
    //cast to prevent warning
    printf("pnumbers size: %zu bytes\n", (int)sizeof(pnumber));

    //memory alignment --> research about the memory allocation, explains 12 base 10 in cbfc

 

    return 0;
}