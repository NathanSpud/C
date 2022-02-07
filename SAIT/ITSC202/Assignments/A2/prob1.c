#include <stdio.h>

int main(void)
{


    int row, column;

    for (row = 1; row <= 10; ++row)
    {
        printf("\t");
        for(column = 1; column <= 10; ++column)
        {
            if (column == 1 || column == 10 || row == 1 || row ==10 || column < row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}