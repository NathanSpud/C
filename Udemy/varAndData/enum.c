/*
Author: NathanS
Purpose: Using Enums
Date: 21/12/201
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    //declared list
    enum gender {male, female};

    //declared variable myGender
    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender==anotherGender);

    printf("%d\n", myGender);  // should return 1 for female

    printf("%d\n", anotherGender); // should return 0 for male
    
    return 0;
}