#include<stdio.h>
 
void fun4(int val1[], int val2);
int fun5(int val1[], int val2);
 
int main(void)
{
    int val1[5] = {10, 20, 30, 40};
    int val2 = 200;
 
    fun4(val1, val2); // call the function and send 1. The address of the first element of the array val1
                      // 2. a copy of val2
    for(int count = 0; count < 5; count++)
    {
        printf("[main]   val1[%d]: %d\n", count, val1[count]);
    }
    printf("[main] after fun4   val2: %d\n", val2);
    val2 = fun5(val1, val2);
 
    for(int count = 0; count < 5; count++)
    {
        printf("[main]   val1[%d]: %d\n", count, val1[count]);
    }
    printf("[main] after fun5  val2: %d\n", val2);
    return 0;
}
 
void fun4(int val1[], int val2)    // using the val1[] we are passing variables between function by reference.
{
    for(int count = 0; count < 5; count++)
    {
        printf("[fun4]   val1[%d]: %d\n", count, val1[count]);
        val1[count] += 10;
    }
    printf("val2: %d\n", val2);
}
 
int fun5(int val1[], int val2)    // using the val1[] we are passing variables between function by reference.
{
    for(int count = 0; count < 5; count++)
    {
        printf("[fun4]   val1[%d]: %d\n", count, val1[count]);
        val1[count] += 10;
    }
    printf("val2: %d\n", val2);
    return val2 + 100;
}