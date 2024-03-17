/*
    Time Duration: 4 minutes .
    Problem 3: Input a value N and print N lines in following way.
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

        for(int k=1; k<=i; k++)
        {

            printf("*");
        }
        printf("\n");


    }

return 0;

}


