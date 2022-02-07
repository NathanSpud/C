#include <stdio.h>
int main(void)
{
    //declaring and initlazing array to track numbers from 10-200
    int number[190] = {10};
    int i = 0;
    int j = 10;

    //loop to counter up to 200 and store the values in the array
    while ( number[i] <= 200)
    {   
        //updates to next element in array to count up to 200
        ++i;
        //counts up to 200
        number[i] = j + 1;

        //goes up by one to updates value stored in previously updated array
        ++j;

        //prints any number that is a multiple of 5 that is 
        //BETWEEN 10 and 200.
        if ( number[i]%5 == 0)
        {
            printf("%d, ", number[i] );
        }
       
    }


    return 0;
}