/*
    Time Duration: 1 minutes .
    Problem 1: Input N and M. Print N lines where every line contains M stars
*/


#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col );
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("*");

        }
        printf("\n");

    }

return 0;

}
