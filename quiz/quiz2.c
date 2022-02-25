#include<stdio.h>
#define WIDTH 25

int main(void)
{
    char input[WIDTH] = "This is my string!!!";
    char odd[WIDTH];
    char even[WIDTH];
    int count;
    char answer = 'y';
  

    // After completing Criteria 1 and 2, write the code necessary
    //   to ask the user for an input string
    do
    {
        count = 0;
        while(input[count] != '\0')
        {   
            if ( count%2 == 0)
                even[count] = input[count];
            else 
                odd[count] = input[count];
            ++count;
        }

        printf("evens: %s\n", even); // This is incomplete
        printf("odds: %s\n", odd); //This is incomplete

        printf("Would you like to process another string? y/n: ");
        scanf(" %c", &answer);

        if( answer == 'y')
        {
            printf("Please enter your new string: ");
            scanf(" %[^\n]s", input);
        }

    } while (answer == 'y');

    return 0;
}