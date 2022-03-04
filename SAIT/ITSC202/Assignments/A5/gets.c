#include <stdio.h>

int main()
{
    char string[15] = "\0";
    
    for ( int i = 0; i <2; ++i)
    {
        printf("Enter a string[%d]: ", i);
        gets(string);
        printf("string return[%d]: %p %s\n \n", i, string, string);
    }

  return(0);
}