#include <stdio.h>

int main()
{
    char string[15] = "\0";
    

    printf("Enter a string: ");
    fgets(string, 15, stdin);

    printf("string return: %s\n", string);
  
  return(0);
}