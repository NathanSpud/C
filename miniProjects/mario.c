//Header files,, importorted libraries for useful extensions
#include <stdio.h>
#include <cs50.h>



//allows for the scrip to run
int main(void)
{

    //defines int
    int n;

    //do loop, executes a command then checks the conditions to see if it should repeat
    do
    {

        //height of pyramid
        n = get_int("How tall do you want your pyramid?: ");


    }
    //While with LOGICAL OR operator. If either condition are TRUE, it will repeat the loop.
    //Since we only want numbers between [1,8], we make the conditions true for any other set of values. Once both negative it will resume with the proper script
    while (n < 1 || n > 8);



    //Tracks height of bi-pyramid.
    for (int i = 0; i < n; i++)
    {

        //to print initial spaces, too keep pyramid aligned. minus the height from the row, leaves an indent one less each row down.
        //we track using i because i is 0 to start and increases every iteration by one
        //had to add -1 to the space formula because the cs50 checker was saying there was an additional character
        //the extra character is likely because i starts at 0. so the indents from the left starts at max height value, WHEN the left hash is one of those allotted spaces, so need to minus one
        for (int j = n - i - 1; j > 0; j--)
        {

            printf(" ");

        }

        //left hashes. Printed starting at 1 since i is 0. then every iteration that i increase, so will the hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        //prints on space. separates left and right hashes.
        printf("  ");

        //places hashes on right
        for (int v = 0; v < (i + 1); v++)
        {
            printf("#");
        }
        printf("\n");
    }





}