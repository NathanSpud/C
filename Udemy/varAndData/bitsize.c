/*
Author: NathanS
Purpose: Using the sizeof operator.
Date: 29/12/2021
*/
#include <stdio.h>

int main()
{
    printf("The space that variables take up for data types follows as such\n");
    printf("Char: %zd, short: %zd, int: %zd, long: %zd,\nlong long: %zd, float: %zd, double: %zd, long double: %zd", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}