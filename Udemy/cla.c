/*
Author: NathanS
Purpose: Using command line arguments.
Date: 22/12/2021
*/

#include <stdio.h>

//need to include parameters
int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
// YOUTUBE VIDEO ON USING COMMAND LINE IN COMMAND PROMPT
//https://www.youtube.com/watch?v=decAHMKIo_A