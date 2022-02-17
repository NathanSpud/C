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
    o	Finally print the length of the longest word found.
•	The 3rd function called reverseStr will reverse a word.
    o	Do not use any library functions, you must build your own reverse algorithm.
    o	The function reverseStr should return:
        	1 if the original and reversed strings are the same.
        	0 if the original and reversed strings are different.
DATE: 18/02/2022
*/
#include <stdio.h>

#define COUNT 5;
int getStrings(COUNT)


