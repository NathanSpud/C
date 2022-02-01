#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(void)
{
    // SRAND - seeds the random number generator
    //
    srand(time(NULL));    // time function returns the current as a timestamp. Timestamp is a large number that represents
                        // the number of seconds since Jan 1, 1970 mignight
 
    int arr1[100];
    int arr2[50] = {0};    // if we declare the first element of the array all others will be 0
    for(int count = 0; count < 100; count++)
    {
        arr1[count] = (rand() % 50);    // This is setting the range of values to be stored between 0 - 49 inclusive.
    }    

    for(int count = 0; count < 100; count++)
    {
        printf("%d ", arr1[count]);
    }

    for(int count = 0; count < 100; count++)
    {
        int index = arr1[count];
        arr2[index] = arr2[index] + 1;
    }
    printf("\n");
    printf("Value\tFrequency\n");

    for(int count = 0; count < 50; count++)
    {
        printf("%d\t%d\n", count, arr2[count]);
    }
    return 0;
}