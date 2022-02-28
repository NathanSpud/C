#include "fun1.h"

char fun1(int val1, char val2, char val3[10], int val4[][10]);
void fun2(int val4[][10]);

int main(void)
{
    srand(time(NULL));
    int val1 = 10;
    char val2 = 'a';
    char val3[10] = "string"; 
    int val4[4][10];
    
    fun2(val4);

    char x = fun1(val1, val2, val3, val4); //function call
    //fun1(copy, copy, reference, reference)
    printf("returned val: %c\n", x);
    return 0;
}