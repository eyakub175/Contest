/*
    Time Duration: 2 minutes .
    Problem 2: Input a value N and print N lines in following way.
*/


#include<stdio.h>
int main()
{
    int row;
    scanf("%d", &row);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");

        }
        printf("\n");

    }

return 0;

}

