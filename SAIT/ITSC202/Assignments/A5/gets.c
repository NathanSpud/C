/*
Author: NathanS
Purpose: Experimenting with gets function
Date: 04/03/2022
*/
#include <stdio.h>

int main()
{
    char string[15] = "\0";
    
    //loop to show the effects of gets and bufferflow
    for ( int i = 0; i <2; ++i)
    {
        printf("Enter a string[%d]: ", i);
        gets(string);
        printf("string return[%d]: %p %s\n \n", i, string, string);
    }
    //if you enter a string longer than 14 characters you will the impact on the i variable due to bufferoverflow
  return(0);
}