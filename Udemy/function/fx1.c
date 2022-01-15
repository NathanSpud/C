#include <stdio.h>

void twoNumber();
/*void twoNumber (int x, int y)
{
    int result = x *y;
    printf("product of %d, %d is %d\n", x, y, result);
} */

int main(void)
{
    twoNumber (10, 20);
    twoNumber (20, 30);
    twoNumber (50, 2);

    return 0;
}

void twoNumber (int x, int y)
{
    int result = x *y;
    printf("product of %d, %d is %d\n", x, y, result);
}