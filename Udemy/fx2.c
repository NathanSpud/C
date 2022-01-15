//
#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}



 
//void meow(void)
void meow(int n)
{
    //printf("Meow!\n");
    for (int i = 0; i < n ; i++)
    {
        printf("Meow!\n");
    }
}