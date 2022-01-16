/*
Author: NathanS
Purpose: Fix a piece of code
Date: 16/01/2022
*/

#include <stdio.h>

int main(void)
{
    //had to put the int type before the variable name, so the compiler can read it properly
    int value = 200;
    //had to remove the +1, as char types do not work like this
    //And changed to single quatations as double implies a string literal
    //used proper char keyword, not capital c
    char valuec = 'A';
    //had to assign float value 100.123 and a variable name
    float valuef = 100.123;

    //changed to valuef in the 2nd argument
    //added decimal range for printing
    printf("Float: %.3f\n", valuef);
    //changed format specifier to appropriate int speciifer, added semi colon
    printf("int value: %d\n", value);
    //added proper name to second argument for propery reference.
    //removed the _formatted, improper syntax.
    //added additional delimiter and qoutations for print functionallity 
    printf("char value: \"%c\"\n", valuec);

    return 0;
}
//additional. If i made the char valuec an array of 10 ( char valuec[10] = "A";)
//in total, the compiler allocates memory space for each element in the array, so 10.
//The first element is A, however there is a 2nd element which is occupied by null characer \0
//The remaining elements are designated at zeros.


//additonally additional
//if we simply made char valuec = ("A +10"); the only value stores in valuec is A+10,  each one a charcter type.
//10 is not considerd an int or other value in this situation