/*
Author: NathanS
Purpose: Using a switch
Date: 29/12/2021
*/
#include <stdio.h>

int main()
{
    enum weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum weekday Today = Monday;
    
    printf("What day of the week is it?\n");
    //scanf("%s", Today);


    

    switch (Today)
    {
        case Thursday:
            printf("Today is Thursday\n");
            break;
        case Friday:
            printf("Today is Friday\n");
            break;
        case Saturday:
            printf("Today is Saturday\n");
            break;
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        case Wednesday:
            printf("Today is Wednesday\n");
            break;
        default:
            printf("What's a weekday?\n");
            break;
    }




    return 0;
}