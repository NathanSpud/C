/*
Author: NathanS
Purpose:
1. Take 5 inpute float numbers and 5 integer numbers
2. Print the average of the float numbers
3. Print average of the integer numbers

4. Print the sum of the itneger numbers
a) If the is even print a message saying that the sum is even
b) if the sum is od print a message saying the sum is odd

5.Print sum of floar numbers
if sum is greater than 20.02 print that
if sum is less than or EQUAL to 20.02 print that

6.AVERAGE VALUES MUSST BE SHOWN WITH EXACTLY 2 DIGITS AFTER DECMIAL PLACE

Date: 22/01/22
*/

#include <stdio.h>

int main(void)
{

    //declaring/Initializing int and float variables
    //using 3 float variables, more data saved truncating float to int
    float value = 0;
    float total = 0;
    float median = 0;

    int counter = 1;

    printf("Enter 5 float numbers.");
    //do while loop for 5 floats.
    do
    {
        printf("\nEnter number %d: ", counter);
        scanf("%f", &value);
        total = total + value;
        counter += 1;

    } while (counter < 6);

    //printing sum of floats, calc median and printing
    printf("\n\tThe sum is: %.2f\n", total);
    median = total / 5;
    printf("\tThe average is: %.2f\n", median);

    //if statement comparing total to 20.02.
    if (total <= 20.02)
    {
        printf("\tThe sum is less than or equal to 20.02\n");
    }
    else
    {
        printf("\tThe sum is greater than 20.02\n");
    }



    //reset counter and total tracker
    counter = 1;
    total = 0;
    printf("\nEnter 5 interger values\n");

    //do while loop, takes float value but converts to int
    //trying to maintain 4 variables.
    do
    {
        printf("Enter number %d: ", counter);
        scanf("%f", &value);
        
        //the cast type int makes the total more or less an int value
        total = total + (int)value;
        counter += 1;
    } while (counter < 6);

    //printing sum of floats, but casting them as an int, calc median and printing
    printf("\n\tThe sum is: %d\n", (int)total);
    median = total / 5;
    printf("\tThe average is: %d\n", (int)median);


    //if statement determing odd or even number
    if( (int)total%2 == 0 )
    {
        printf("\tThe total is even\n");
    }
    else
    {
        printf("\tThe total is odd\n");
    }


    return 0;
}