/*
Author: NathanS
Purpose: Using command line arguments.
Date: 22/12/2021
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int convert(char inputs[]);
int parce(int counter, char input[]);

//need to include parameters
int main(int counter, char *inputs[]) //REFERENCE:Oskar helped me understand the meaning of this line
{   
    printf("%d\n", counter);
    int i = 1;
    int x;

    //Convert and parce CMDLA
    while( i < counter)
    {   

        printf("Main[] %d\n", convert(inputs[i]));

        ++i;
    }
    return 0;
}




int convert(char inputs[])
{
    int powers[5] = {1, 10, 100, 1000, 10000};
    int x = strlen(inputs); //defines length of loop
    int i = 0;
    int value = 0;
    


    //algorithim to convert string into a decimal code.
    while( i < strlen(inputs) )
    { 
                x = parce(counter, inputs[i]);
        if( x == 1 )
            ++i;
        value += ((inputs[i] - 48) * powers[i]);
        ++i;
    }
 
    return value;

}


//function for parcing through arguments
int parce(int counter, char input[])
{
    int i = 0;
    int value = 0;
    while(i < strlen(input))
    {   
        
        if(input[i] > 41 && input[i] < 48)
        {
            value = 1;
        }
        else if(input[i] > 47 && input[i] < 58)
        {
            
            value = 0;
        }
        else
        {   
            printf("\t!!!You entered someother other than an operation or numerical value!!!");
            exit(0);
        }
        ++i;
    }
    printf("%s\n", input);

    return value;
}