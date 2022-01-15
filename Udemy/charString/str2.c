/*
Author: NathanS
Purpose: Udemy example
Date: 15/01/2022
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char s[] ="My name is";
    char temp[50] = "Hell";

    //first argument what you want copied to, 
    //2nd argument, what is being copied
    //3 size to be allocated for copy, size sshould be destination
    //minues one for null character
    strncpy(temp, s, sizeof(temp) -1 );

    //prints length of string s
    printf("The length of the string is: %d", strlen(s));

    //shows s was coppied to s
    printf("\nThe string is: %s", temp);

   
    return 0;
}