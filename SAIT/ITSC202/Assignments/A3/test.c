#include <stdio.h>

int main(void)
{
    int x = 100000000/(10*2);
    int y = 100;
    printf("%d",  x +y);

    char binary[9];
    scanf(" %s", &binary);
    printf("%s, %c", binary, binary[0]);
    return 0;
}