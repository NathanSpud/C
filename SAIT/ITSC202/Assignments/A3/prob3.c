#include <stdio.h>

int main(void)
{
    //Declare array for binary number and size
    //include an extra element for null character
    char binary[4];
    //other variables to be used to track size, counter and etc


   //Asks user for their binary number to be converted
    printf("========================================\n");
    printf("Enter an 8 bit binary number: ");
    scanf(" %s", &binary);

    printf("%s", binary);

    return 0;
}