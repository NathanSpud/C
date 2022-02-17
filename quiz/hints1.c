#include <stdio.h>

int main(void)
{
    char arr[10]; //understad everything would be null terminator
    char arr2[10] = {'a', 'b'}; //avoid this //understand that everything after a and b is null terminator
    char arr3[10] = { "a,b"}; //this works
    char arr4[10] = "ab"; //works

    char array6[10];
    array6[0] ] 'a';
    array6[1] ] 'b';
    array6[2] ] = array6[1] +1; //understand that this is c
    //if ascii value of 'a' is 97, what is the content of ..blah

    // base addrss of array is 0x7fffff1020, what is address of character c
    //answer is 1022, keep in mind data type

    //operation on contents of array, follow sequence

    //programm that reverses string

    //predict values in memory of an array.

    //IE char arr[12] = "this is cool";
    //printf("%s:%s\n", &arra1[0], &arra1[6])
    //printf("%s:%s\n", arra1[0], arra1[6])

    

    return 0;
}