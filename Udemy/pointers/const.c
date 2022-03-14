#include <stdio.h>

int main()
{   

    //using const int *px
    int value = 1;
    const int *pvalue = &value;

    *pvalue = 2; //ERROR - attempt to change const location
    value = 2; // this is okay, this only applies to an attempt to modify the value through the pointer

    int number = 2;
    pvalue = &number; // also valid 
                    // Note that if you dereference pvalue now, you get the value 2, for the variable number
    *pvalue = 3 //ERROR cannot change the value


    //using int *const px
    int x = 1;
    int *const px = &count;

    int item = 2;
    px = &item; //ERROR

    return 0;

}