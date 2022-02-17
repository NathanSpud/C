#include<stdio.h>
 
void input(int arr[][5], int row, int col)
{
    for(int rw = 0; rw < row; rw++)
    {
        printf("Enter a row of values: ");
        for(int cl = 0; cl < col; cl++)
        {
            scanf("%d", &arr[rw][cl]);
        }
    }
}
 
void printer(int arr[][5], int row, int col)
{
    for(int rw = 0; rw < row; rw++)
    {
        printf("row %d: ", rw + 1);
        for(int cl = 0; cl < col; cl++)
        {
            printf("%d ", arr[rw][cl]);
        }
        printf("\n");
    }
}
 
int main(void)
{
    int arrint[4][5] = {{1,2,3,4,5}};
    input(arrint, 4, 5);
    printer(arrint, 4, 5);
    return 0;
}