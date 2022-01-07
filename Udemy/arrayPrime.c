/*
Author: NathanS
Purpose: To find all the prime numbers from 0-100
Date: 06/01/2021
*/

#include <stdio.h>

int main()
{

    //intializing array and variables
    //arrayPrime has elements 0-2, set as 1,2,3 for the first set of prime numbers for ease
    int prime[100] = {1,2,3};
    int number[100];
    int i;
    int j;


    //loop to count to 99 as to check for prime numbers
    for ( i = 3; i < 100; ++i)
    {   
        //intialize k and set to 0, as it track primes. wont reset after inner loop
        int k = 0;
        number[i] = i + 1;

        
        //loop to find primes, divide by 2, as we need to see if number has any common factors
        //other than itself or 1. No common factos exist for a number after it's half
        for( j = 2; j<=number[i]/2; ++j)
        {
         
            //since j starts at 2, and number will start at 4, this will detect
            //any common factor other than itself, and will break the loop.
            if (number[i]%j == 0)
            {
                k = 1;
                break;
            }
        }

    
    
    //this will assign prime numbers detected from number array
    if ( k == 0)
    {
        prime[i] = number[i];
    }


    }

    //Loop to print all prime numbers from 1-100. exluding 0s assigned in previous loop
    for ( i = 0; i<100; ++i)
    {
        if ( prime[i] != 0)
        {
            printf("%d, ", prime[i]);
        }
    }

 

    return 0;
}