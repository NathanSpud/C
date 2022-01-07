/*
Author: NathanS
Purpose: Find the average of 10 input numbers
Date: 06/01/2021
*/
#include <stdio.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;


    printf("\nEnter the 10 grades:\n");

    for ( int i =0 ; i < count ; ++i)
    {
        printf("%2u>", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float) sum/count;
    printf("Average of the Ten grades entere are: %.2f\n", average);


    return 0;
}
