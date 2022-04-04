#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number(char argString[]);
int operations(char argStringC[], int numbers[], int i);
int calc(char argString[], int tracker[], int numbers[], int place[]);

void main(int argCounter, char *argString[])
{
    int numbers[10];
    int tracker[10];
    int place[10];

    int i = 0;
    int x;

    //obtain values, positioing and operations
    while( i < (argCounter - 1))
    {
        //store numbers
        numbers[i] = number(argString[i+1]);
        printf("number[%d] %d\n", i, numbers[i]);

        //find order of operations
        ++i;
    }
    
    for( i = 0; i < (argCounter - 1); ++i)
    {
        if( numbers[i] == 0)
            tracker[i] = operations(argString[i+1], numbers, i);
    }

    ///REMOVE THIS PART OF WLOOP REMOVE THI S NATHAN
    /*i = 0;
    while( i < 5)
    {
        printf("\nnumber: %d operation: %d place: %d ", numbers[i], tracker[i], place[i]);
        ++i;
    }*/
    /////////////

}


//converting string values to numbers
int number(char argString[])
{
    int value;

    value = atoi(argString);
    
    return value;
}


//tracking order for operations
int operations(char argStringC[], int numbers[], int i)
{

    int value = 0;
    printf("%c\n", argStringC[0]);

    switch(argStringC[0])
    {
        case '+':
            printf("add\n");
            printf("%d %d\n", numbers[i-1], numbers[i+1]);
            value = numbers[i-1] + numbers[i+1];
            printf("value %d\n", value);
            break;
        case '-':
            printf("sub\n");
            value = numbers[i-1] - numbers[i+1];
            printf("value %d\n", value);
            break;
        case '*':
            printf("mutli\n");
            value = numbers[i-1] * numbers[i+1];
            printf("value %d\n", value);
            break;
        case '/':
            printf("divi\n");
            value = numbers[i-1] / numbers[i+1];
            printf("value %d\n", value);
            break;
        default:
            printf("Invalid operator");
    }
    return value;

}


