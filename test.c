/*


Author: NathanS


Purpose: Quiz


Date: 17/01/2022


*/


#include <stdio.h>


int main(void)
{
    int nmbr, sqd, i;


    do
    {
        printf("Please give a number between 10 and 20: ");
         scanf("%d", &nmbr);
    }
    while ( (nmbr < 10) || (nmbr > 20));


    sqd = nmbr * nmbr;


    printf("\nThe square of %d is %d.\n", nmbr, sqd);



    return 0;

}


