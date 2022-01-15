/*
Author: NathanS
Purpose: 2d array in a weather program. 
Find total rainfall, average yearly rainful and the average rainful for each month.
Date: 07/01/2021
*/
#include <stdio.h>

int main()
{
    //2d array to track year and months (visualize 5 rows, 12 columns)
    float weather[5][12] = {        
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int month;
 

    float total = 0;
    int i = 0;
    int j = 0;
    int year = 17;

    //Total rainfall each year - loop
    for ( i = 0; i <=4; ++i)
    {
        
        total = total + weather[i][j];
        for ( j = 1; j<=11; ++j)
        {
            total = total + weather[i][j];
        }

          
        printf("\nTotal yearly rainfall 20%d, %.2finches\n", year, total);
        year = year + 1;
        total = 0;
        j = 0;
    }
    

    //5 year average
        for ( i = 0; i <=4; ++i)
    {
        total = total + weather[i][j];
        for ( j = 1; j<=11; ++j)
        {
            total = total + weather[i][j];
        }
        j = 0;
    }
    total = total/5;
    printf("\nAverage yearly rainfall, %.2finches\n", total);

    //Average rainfall each month       
    printf("\nAverage Monthly rainfall for 5 years\n\n");
    i = 0;
    j = 0;
    total=0;
    for ( j = 0; j <=11; ++j)
    {
        
        total = total + weather[i][j];
        for ( i = 1; i<=4; ++i)
        {
            total = total + weather[i][j];
        }

        total = total / 5;
        printf("month %d: %.2f, ", month, total);
        month = month + 1;
        total = 0;
        i = 0;
    }
     
    ;




    return 0;
}