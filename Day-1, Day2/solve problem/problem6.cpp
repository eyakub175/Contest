/*
    Time Duration: 10 minutes .
    Problem 6: Input a value N and print N lines in following way.
*/


#include<stdio.h>
int main()
{
    int row;
    scanf("%d", &row);

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row*2-(i*2-1); j++)
        {
            printf("*");

        }
        printf("\n");


    for(int k=0; k<i; k++)
        {

            printf(" ");
        }



    }

return 0;

}




