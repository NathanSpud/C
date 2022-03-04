#include <stdio.h>
#include <ctype.h>

int lower(char refarr1[][3]);

int main(void)
{
    char arr1[][3] = {"A", "BB", "CC"};
    for ( int row = 0; row <3; row++)
    {
        for ( int col = 0; col <3; col++)
        {
            printf("&rarr1[%d][%d]: %p\n", row, col, &arr1[row][col]);

        }
        
    }
    
    int retval = lower(arr1);


}

int lower(char refarr1[][3])
{
    for ( int row = 0; row <3; row++)
    {
        for ( int col = 0; col <3; col++)
        {
            refarr1[row][col] = tolower(refarr1[row][col]);

        }
        printf("refarr1[ %d ]: %s\n", row, refarr1[row]);
    }
    
}