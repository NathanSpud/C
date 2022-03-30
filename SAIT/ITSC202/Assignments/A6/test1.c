#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number(char argString[]);
void operations(char argStringC[], int tracker[], int place[], int i);
int calc(char argString[], int tracker[], int numbers[], int place[]);

void main(int argCounter, char *argString[])
{
    int numbers[5];
    int tracker[5] = {0, 0, 0, 0, 0};
    int place[5];

    int i = 0;
    int x;

    //obtain values, positioing and operations
    while( i < (argCounter - 1))
    {
        //store numbers
        numbers[i] = number(argString[i+1]);

        //find order of operations
        if( numbers[i] == 0)
            operations(argString[i+1], tracker, place, i);

        
        
        ++i;
    }

    ///REMOVE THIS PART OF WLOOP REMOVE THI S NATHAN
    i = 0;
    while( i < 5)
    {
        printf("\nnumber: %d operation: %d place: %d ", numbers[i], tracker[i], place[i]);
        ++i;
    }
    /////////////

    //preform the calculations
    for( i = 1; i < argCounter -1; ++2)
    {
        x = calc(argString[i+1], tracker, numbers, place[i+1]);
    }
}


//converting string values to numbers
int number(char argString[])
{
    int value;

    value = atoi(argString);
    
    return value;
}


//tracking order for operations
void operations(char argStringC[], int tracker[], int place[], int i)
{
    int value;
    
    if( argStringC[0] == '+')
        tracker[0] = 1;
    else if( argStringC[0] == '-')
        tracker[1] = 2;
    else if( argStringC[0] == '*')
        tracker[2] = 3;
    else if( argStringC[0] == '/')
        tracker[3] = 4;
    place[i] = i;

}


//my calcultor in action
int calc(char argString[], int tracker[], int numbers[], int place[])
{
    int pos[5];
    int first, second, value;

    for( int i = 0; i < 5; ++i)
    {
        



    }
    

    


    return value;
}