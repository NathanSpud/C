#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
   printf("%d \n", stringLength("stringLength test"));
   printf("%d \n", stringLength(""));
   printf("%d \n", stringLength("nathan"));

    return 0;
}

int stringLength(const char *string) //char value cannot be changed, store in string
{
    const char *lastAddress = string; // const value cannot be changed

    
    while (*lastAddress) //until lastaddress == 0, due to null character
    {
        ++lastAddress; //update position of pointer before arithmatic (starts at element 0 due to base address)
        printf("\nLast: %p", lastAddress);
    }
    printf("\nString: %p, Last: %p\n", string, lastAddress);
    return lastAddress - string; //last address - first, difference = length
}