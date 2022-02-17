#include<stdio.h>
 
//in the prototype the variables holder and holder2 are
// called references. Their purpose is to hold the address of the
// array that was passed to the function fun5.
 
int fun5(int holder[5], int holder2[], int copy);
 
int main(void)
{
    int arg1[5] = {1,2,3,4,5};
    int arg2[5] = {10, 20, 30, 40, 50};

    printf("[main]  address of arg1: %p\n", arg1);
    printf("[main]  address of arg2: %p\n\n", arg2);    

    fun5(arg1, &arg2[0], 5);
    return 0;
}
 
// In the context of a function holder is not an array it is a reference to a variable in the calling function
int fun5(int holder[5], int holder2[], int count)
{
    printf("[fun5]  content of holder: %p\n", holder);
    printf("[fun5]  content of holder2: %p\n", holder2);
    printf("address of holder: %p\n", &holder);
    printf("address of holder2: %p\n", &holder2);        

    for(int val = 0; val < count; val++)
        printf("holder[%d]: %d  holder2[%d]: %d\n", val, holder[val], val, holder2[val]); 
 
    return 100;
}