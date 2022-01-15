#include <stdio.h>

int twoNumber ();

int main(void)
{
    int result = 0;
    result = twoNumber (10, 20);

    printf("result is %d\n", result);
    return 0;
}

int twoNumber (int x, int y )
{
    int result = x * y;
    return result;
}