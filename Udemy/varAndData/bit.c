/*
Author: NathanS
Purpose: Using bitwise operators
Date: 29/12/2021
*/

#include <stdio.h>

int main()
{
    //Unsigned means it can only be a positive value.
    unsigned int a = 60; //0011 1100
                         // remember it is 32 bits
                         // 0000 0000 0000 0000 0000 0000 0000 0000
    unsigned int b = 13; //0000 1101
    int bitAnd, bitOr, bitXor, bitTilde, bitLeft, bitRight;

    //if a is = 1 and b is = 1, the bit should be turned on
    bitAnd = a & b;
        // you assess each bit left to right and apply the conditions
        // in this case both must be true for a true bit.
        // 0000 1100 =12
    bitOr = a|b;
        //either byte can have an on bit for it to be turn on
        //0011 1101 = 61
    bitXor = a^b;
        //only one bit can be on 
        // 0011 0001 = 49
    
    bitTilde = ~a;
        //flips all the bits
        //1100 0011 = -61 (195?)

    bitLeft = a<<2;
        //1111 000 = 240

    bitRight = a>>2;
        //0000 1111 = 15

    printf("bitAnd: %d, bitOr: %d, bitXor: %d\n", bitAnd, bitOr, bitXor);
    printf("bitTilde: %d, bitLeft: %d, bitRight: %d\n", bitTilde, bitLeft, bitRight);


    return 0;
}