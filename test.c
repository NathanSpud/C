/*


Author: NathanS


Purpose: 
1. print the address of each variable using the & operator



Date: 25/01/2022


*/


#include<stdio.h>
#include<string.h>


int main (void)
{
    char str[] = "The quick brown fox";
    char ch ='q';
    char *pGot_Char = NULL;
    pGot_Char = strchr(str, ch);
    printf("%s", pGot_Char)

    return 0;
}


