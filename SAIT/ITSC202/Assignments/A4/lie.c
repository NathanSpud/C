#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int randomnumber;
    randomnumber = rand() % 10;
    printf("%d\n", randomnumber);
    return 0;
}