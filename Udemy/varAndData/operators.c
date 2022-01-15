/*
Autho: NathanS
Purpose: Using operators.
Date: 24/12
*/
#include <stdio.h>

int main()
{

    //Arithmetic operators.
    int a = 20;
    int b = 7;

    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    float div = a/b;
    float rem = a%b;

    printf("Example of basic arithmetic operators\n");
    printf("Addition: %d, Subtraction: %d, multiplication: %d, divison: %.2f,\nremainder: %.2f, prefix: %d, postfix: %d \n", sum, sub, multi, div, rem, ++a, a++);


    //Logical Operators. (boolean values are integers, 1 or 0)
    _Bool c = 1;
    _Bool d = 1;
    _Bool e = 0;
    _Bool f = 0;

    _Bool logAND0;
    _Bool logAND1;
    _Bool logAND2;

    logAND0 = c && d;
    logAND1 = c && e;
    logAND2 = e && f;

    printf("c&d=true, e&f=false\n");
    printf("c&&d: %d, c&&e: %d, e&&f: %d\n", logAND0, logAND1, logAND2);



    return 0;
}