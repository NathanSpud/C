/*
Author: NathanS
Purpose:
•	You will choose the number of strings (at least 5) to have the user enter.
    o	You should use a #define COUNT constant to set the number of words that will be entered.
•	You will create 3 functions minimum. You are allowed to create extra functions if warranted.
    o	You WILL place those 3 functions after the declaration of main.
    o	Create header file(s) and place all constants and prototypes in the .h file(s).
    
•	The 1st function called getStrings will get COUNT words from the user
    o	Each word entered should be a maximum of 30 characters.
    o	The function should return the length of the longest string the user entered.
        	You may need to use a static variable if you call getStrings multiple times.
        
•	The 2nd function called isPalindrome determines if the string entered is a palindrome.
    o	The function isPalindrome should return the number of palindromes found.
    o	isPalindrome will call the function reverseStr described below.
    o	isPalindrome will print the word and declare if it is a palindrome.
    o	Finally print the length of the longest word found

•	The 3rd function called reverseStr will reverse a word.
    o	Do not use any library functions, you must build your own reverse algorithm.
    o	The function reverseStr should return:
        	1 if the original and reversed strings are the same.
        	0 if the original and reversed strings are different.
DATE: 18/02/2022
*/

#include<stdio.h>
#define COUNT 5   // number of strings to accept from user

//declaring function prototypes
void getStrings(char string[COUNT][31], int i, int j);
int isPalindrome(char string[COUNT][31]);
int reverseStr(char string[COUNT][31], int test[4]);


int main(void)
{   
    //initiliazing variables for use
    int i = COUNT;
    int j = 31;
    char string[COUNT][31];

    //utilizing function 1
    getStrings(string, i, j);

    //Utilizing function 2
    int success = isPalindrome(string);
    
    
    // if success was x then print Palindrome successfully found x palindromes
    // if success was 0 then print Palindrome did not find any palindrome

    return 0;
}

//function to get the strings from user
void getStrings(char string[COUNT][31], int i, int j)
{
    //length is a local variable to track length of strings
    //row is a local variable to determine what row the longest string is on
    i = 0;
    int length = 0;
    int row = 0;

    //loop to get 5 strings from user
    while ( i < COUNT)
    {
        printf("please enter string %d: ", i + 1);
        scanf(" %[^\n]s", string[i]);
        ++i;
    }
    
    //loop to find length of each string and which is the longest
    i=0;
    while(i<COUNT)
    {   
        //we are simply tracking j for size of string
        for(j=0; string[i][j] != '\0'; ++j)
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
    
    printf("\nLongest string has %d characters: %s\n", length, string[row]);
    
}


//function that determines if the strings given are in-fact palindromes
//will also print which words are not palindromes/palindrome
int isPalindrome(char string[COUNT][31])
{   

    int i = 0;
    int j = 0;
    int k = 0;
    int tracker[4];
    int test[4];

    //Loop to determine what strings are palindromes via reverse
    while( i < COUNT )
    {   
        //loop to find end of string so we can compare end and first characters later
        for( j = 0; string[i][j] != '\0'; ++j)
        {

        }

        //loop to compare first and last character
        while( k <= j)
        {   
            //if statement comparing first and last character, if equal, it is a palindrome
            if( string[i][k] == string[i][j-1])
            {
                test[i] = 1;
                tracker[i] = i;
                --j;
                ++k;
            }
            else if (  string[i][k] != string[i][j-1])
            {
                //breaks the inner most whle loop
                test[i] = 0;
                tracker[i] = i;
                break;
            }
        }

        k = 0;
        ++i;
    }


    i = 0;
    j = 0;
    //loop to print palindrome
    printf("\npalindromes: ");
    while( i < COUNT)
    {
        if (test[i] == 1)
        { 
            printf("%s, ", string[i]);
        }
        ++i;
    }
    //loop to print non palindrome
    i = 0;
    j = 0;
    printf("\nNot a palindrome: ");
    while( i < COUNT)
    {
        if (test[i] == 0)
        {
            printf("%s, ", string[i]);
        }
        ++i;
    }
    
   // reverseStr(string, test);
    
}

//function that reverse the strings that are palindromes.  
int reverseStr(char string[COUNT][31], int test[4])
{
    int i = 0;
    int k = 0;
    int j = 0;
    int z = 0;
    while ( i < COUNT)
    {   
        //using passed through test array to reverse strings that ARE palindromes
        if ( test[i] == 1)
        {
            
            //finds end of string
            for(j = 0; string[i][j] != '\0'; ++j)
            {

            }
            while (k<j)
            {
                string[i][k] = string[i][j-1];
                ++k; 
            }
            ++i;
            ++z;
            printf("%d\n", z);
           
        }

        i = 0;
        printf("There are %d strings: ", z);
        while ( i < COUNT)
        {
            if ( test[i] == 1)
            {
                printf("%s, ", string[i]);
            }
            ++i;

        }
       
        
    }

    
    


    return 0;
   
} 




