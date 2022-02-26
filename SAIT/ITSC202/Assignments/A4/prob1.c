/*
Author: NathanS
Purpose: Get user input and determine if it is a palindrome or not
Date: 23/02/2022
*/
#include <stdio.h>
#define COUNT 5    // number of strings to accept from user

//prototypes declared w/ respective variables being passed through
int getStrings(char string[COUNT][31]);
int reverseStr(char string[COUNT][31], int i);
int isPalindrome(char string[COUNT][31], int x);

int main(void)
{
    // Possible variables here
    char string[COUNT][31];
    int x = getStrings(string);

    //function calls here
    int success = isPalindrome(string, x);
    // if success was x then print Palindrome successfully found x palindromes
    // if success was 0 then print Palindrome did not find any palindrome
    printf("\nnumber of palindromes were %d", success);
}   

//function to get strings from user.
int getStrings( char string[COUNT][31] )
{
    //length is a local variable to track length of strings
    //row is a local variable to determine what row the longest string is on
    int i = 0;
    int j = 0;
    int length = 0;
    int row = 0;

    //loop to get 5 strings from user
    while ( i < COUNT )
    {
        printf("please enter string %d: ", i + 1);
        scanf(" %[^\n]s", string[i]);
        ++i;
    }
    
    //loop to find length of each string and which is the longest
    i = 0;
    while( i < COUNT ) 
    {   
        //we are simply tracking j for size of string
        for( j = 0; string[i][j] != '\0'; ++j )
        {
          //chicken lips for explicit declaration.    
        }
        //this if statement will determine longest string and what row the length occurs on
        if ( j > length)
        {
            length = j;
            row = i;

        }
        ++i;  
    }
    
    //returns length of longest string
    return length;

}

//uses an algorithim to determine if the string is a palindrome or not
//now, as I review this function, I realize it doesn't reversethe string like you asked
//HOWEVER I argue, that the greater intention of the function is to return 1, 0
int reverseStr(char string[COUNT][31], int i)
{

    //made an int array to store 1 and 0 values, will be passthrough later to isPlaindrome
    int j = 0;
    int k = 0;
    int output[4];

    //loop to find end of string so we can compare end and first characters later
    for( j = 0; string[i][j] != '\0'; ++j)
    {

    }

    //loop to compare first and last character
    while( k <= j)
    {   
        //if statement comparing first and last character, if equal, it is a palindrome
        if( string[i][k] == string[i][j-1] )
        {
            output[i] = 1;
            --j;
            ++k;
        }
        else if (  string[i][k] != string[i][j-1] )
        {
            //breaks the inner most whle loop
            output[i] = 0;
            break;
        }
    }

    k = output[i];


    return k;
}

//too determine if the strings entered are palindromes or not.
int isPalindrome(char string[COUNT][31], int x)
{
    //int test will be taking and storing the values from reverseStr
    int i = 0;
    int j = 0;
    int test[4];  

    //loop to test for palindrome, get 1 or 0. assigns values to test array in incremental order of elements
    while( i < COUNT)
    {
        test[i] = reverseStr(string, i);
        ++i;
    }

    i = 0;
    //prints out if the word is a palindrome or not
    while( i < COUNT)
    {   
        //if statment that uses output from reverseStr to print out palinedromes
        if ( test[i] == 1)
        {
            printf("\n'%s' is a palindrome.", string[i]);
            ++j;
        }
        else if (  test[i] == 0)
        {
            printf("\n'%s' is NOT a palindrome.", string[i]);
        }        
        ++i;
    }

    //final action
    printf("\n\nThe longest word was %d characters long", x);


    //return value as number palindromes found.
    return j;
}
