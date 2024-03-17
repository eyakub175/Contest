/*
    Time Duration: 5 minutes .
    Problem 4: Input a value N and print N lines in following way.
*/


#include<stdio.h>
int main()
{
    int row;
    scanf("%d", &row);

    for(int i=1; i<row; i++)
    {
        for(int j=1; j<=row-i; j++)
        {
            printf(" ");

        }

        for(int k=1; k<=i*2-1; k++)
        {

            printf("*");
        }

        for(int l=1; l<=row-i; l++)
        {

            printf(" ");

        }
        printf("\n");


    }

return 0;

}


