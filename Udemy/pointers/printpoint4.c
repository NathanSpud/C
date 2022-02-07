#include <stdio.h>

int main(void)
{

    int number = 0;
    int *pnumber = NULL; //a pointer that cna point to type int

    number = 10;
    //output address
    printf("numbers address: %p\n", &number);
    //output value
    printf("numbers valee: %d\n", &number);

    pnumber = &
    number; //store the address of the number in pnumber

    //output address
    printf("Pnumber's address: %p\n", (void*)&pnumber);
    //out the size
    printf("Pnumber's size: %zd\n", sizeof(pnumber));
    //output the value(an address)
    printf("Pnumber's value: %p\n", pnumber);
    //value at address
    printf("value pointed to: %d\n", *pnumber);
    return 0;
}