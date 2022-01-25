/*


Author: NathanS


Purpose: 
1. print the address of each variable using the & operator



Date: 25/01/2022


*/


#include<stdio.h>


int main (void)
{
    //short halves the available space allocated, in this case, 4-->2
    short int aval = 100;
    int bval = 100;
    float cval = 100;
    double dval = 100;
    char eval = 100;
    unsigned char fval = 100;

    //printing out address of each variable using the %p specifer
    //then the value of each data type and it's variable with the appropriate format specifier
    //then printing out respective hex numbers with %X
    //finally printing the sizeof, or the amount of bytes allocated for the variable (determined by data type)
    printf("[aval]> Addr: %p, Value: %d    or Hex: 0x%X,\tSizeof: %zd byte\n", &aval, aval, aval, sizeof(aval));
    printf("[bval]> Addr: %p, Value: %d    or Hex: 0x%X,\tSizeof: %zd byte\n", &bval, bval, bval, sizeof(bval));
    printf("[cval]> Addr: %p, Value: %.2f or Hex: %a,   Sizeof: %zd byte\n", &cval, cval, cval, sizeof(cval));
    printf("[dval]> Addr: %p, Value: %.2lf or Hex: %a,   Sizeof: %zd byte\n", &dval, dval, dval, sizeof(dval));
    printf("[eval]> Addr: %p, Value: %c      or Hex: 0x%X,\tSizeof: %zd byte\n", &eval, eval, eval, sizeof(eval));
    printf("[fval]> Addr: %p, Value: %c      or Hex: 0x%X,\tSizeof: %zd byte\n", &fval, fval, fval, sizeof(fval));
 


    return 0;
}


