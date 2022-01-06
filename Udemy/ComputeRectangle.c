/*
Author: Nathan
Purpose: Print the perimeter and area of a rectangle.
Date: 22/12/2021
*/

#include <stdio.h>

int main()
{

    //declaring variables that will be used
    double w, l, perimeter, area;
 
    //asking user for length & width for a rectangle. %lf is double format speciifer
    printf("Enter the width then length for your rectangle: ");
    scanf("%lf %lf", &w, &l);
    printf("The width and length of your rectangle is: %.3lf & %.3lf\n", w, l);

    //calculating perimeter and area with users input, then displaying data.
    perimeter = (w+l)*2;
    area = w*l;
    printf("The perimeter and area are: %.3lf units & %.3lf units squared\n", perimeter, area);




    return 0;
}