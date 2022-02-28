#include "fun1.h"

char fun1(int val1, char val2, char val3[10], int val4[][10])
{

    printf("val1: %d\n", val1);
    printf("val2: %c\n", val2);
    printf("val3: %s\n", val3);
    //printf("val4: %d\n", val4[0][0]);
    for ( int row = 0; row <4; row++)
    {
        printf("\t val4 row %d: ", row);
        for ( int col = 0; col <10; col++)
        {
            printf("%d ", val4[row][col]);
        }
        printf("\n");
    } 

    return(val2 + 1);
}

void fun2(int val4[][10])
{

    for ( int row = 0; row <4; row++)
    {
        for ( int col = 0; col <10; col++)
        {
            val4[row][col] = rand() % 21;
        }
    }  
}