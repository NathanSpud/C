/*
Author: NathanS
Purpose: Using Enums
Data 22/12/2021
*/
#include <stdio.h>

int main()
{
    //declaring and initliazing an enum. creating enum type called company
    enum company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    //print the integer values associated with the enum type.
    printf("Enum values; xerox: %i, google: %i, ebay: %i\n", XEROX, GOOGLE, EBAY);



    return 0;
}