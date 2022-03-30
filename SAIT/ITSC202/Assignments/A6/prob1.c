/*
Author: NathanS
Purpose: Take Command Line Arguments (CLA) and preform maths operations
Date: 28/03/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int convert(int argCounter, char argString[], int tracker[], int place[], int i);
int operations(int argCounter, int numbers[], int tracker[], int place[], int i);


void main(int argCounter, char *argString[])
{

    int numbers[10];
    int tracker[5] = {0,0,0,0,0};
    int place[5];

    int i = 0;
    int x;

    //convert string numbers to ints
    //start figuring out order of operations
    while( i < (argCounter - 1))
        {
            //assign convert int values for easier tracking
            printf("%s\n", argString[i+1]);
            numbers[i] = convert(argCounter, argString[i+1], tracker, place, i);
            printf("i %d numbers %d, tracker %d\n", i, numbers[i], tracker[i]);
            ++i;
        }

    i = 0;
    
    //to preform operations
    //x = operations(argCounter, numbers, tracker, place, i);
    //printf("%d\n", x);

}


//function for converting and tracking order of operations
int convert(int argCounter, char argString[], int tracker[], int place[], int i)
{
    
    //converting string to int values
    int value = atoi(argString);
    if ( argString[i] == '+')
    {
        tracker[0] = 1;
    }
    


    //value to be stored in numbers area in main function
    return value;
}



//identify operations
/*int operations(int argCounter, int numbers[], int tracker[], int place[], int i)
{
    int value;
    int test;
    while( i < argCounter - 1)
    {   
        value = calc(numbers, tracker, place, i);
        value +=value;
        

        ++i;
    }

    return value;
}*/

//
/*int calc(int argCounter, int numbers[], int tracker[], int place[], int i)
{
    int value = 0;
    int x = 0;
    

    while( i < argCounter - 1)
    {
        if( tracker[i] < tracker[i+1]) //checking to see if operations exist
        {
            if( tracker[i+1] < tracker[i+2])
        }


    }




    return value
}*/