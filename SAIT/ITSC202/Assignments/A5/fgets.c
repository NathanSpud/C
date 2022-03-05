/*
Author: NathanS
Purpose: Experimenting with fgets
Date: 04/03/2022
*/
#include <stdio.h>

int main()
{
    char string[15] = "\0";
    

    printf("Enter a string: ");
    fgets(string, 15, stdin);

    printf("string return: %s\n", string);
  
  return(0);
}