#include <stdio.h>
#include <stdio_ext.h>

int main()
{
    char buffer[16] = "\0";
    char *retval = NULL; // by convenion says you should inital your pointers to NULL


    printf("Enter a string: ");
    retval = fgets(buffer, 16, stdin);
    if(retval)
    {
      printf("retval: %p %s\n", retval, retval);
    }
    else
    {
      exit(-1); //means something bad happened
    }

    __fpurge(stdin);
    printf("buffer: %s\n", buffer);
    printf("retval: %p %s\n", retval, retval);
    
  
  return(0);
}