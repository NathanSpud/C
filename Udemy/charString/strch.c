/*


Author: NathanS


Purpose: 
use strchr
Date: 26/01/2022


*/


#include<stdio.h>
#include<string.h>


int main (void)
{
    char str[] = "The quick brown fox";
    char ch ='q';
    char *pGot_Char = NULL;
    pGot_Char = strchr(str, ch);
    printf("%s", pGot_Char);

    return 0;
}


