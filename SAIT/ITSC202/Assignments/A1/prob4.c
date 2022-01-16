/*
Author: NathanS
Purpose: Anaylzing piece of code
Date: 19/01/2022
*/

#include <stdio.h>

int main(void)
{
    //aval has the value 65532, bval is 0, cval is 1.
    //the keyword unsigned just declares that the following integer cannot be negative
    //the shprt keyword reduces the bit size of data the variable can store to 16bits
    unsigned short int aval = 65532;
    unsigned short int bval = 0;
    //cval is just initilized here, and in absemce of declartion, c assigns 1.
    int cval;


    printf("First printf statement: \n");
    printf("\taval: %d\n\tbval: %d\n\tcval: %d\n", aval, bval, cval);

    //update formulas
    //aval is not changed because the assignment operator, only takes the out/properties of the right and designates it to the left
    //bval remains unchanged because it can only store 16 bits.
    //2^16 = 65536 (-1 for 0), 
    bval = aval + 4;
    cval = aval + 5; 
    //bval could not be assigned the value from the operands on the right, so remainded 0
    //while cval, without type short, cval does not have data limitation like bval and could store the righ operands value


    printf("Second printf statement: \n");
    printf("\taval: %d\n\tbval: %d\n\tcval: %d\n", aval, bval, cval);

    return 0;
}