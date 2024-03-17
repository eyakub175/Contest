/*
    Time Duration: 5 minutes .
    Problem 7: Input a value N and print N lines in following way.
*/


#include<stdio.h>
int main()
{
    int row;
    scanf("%d", &row);


    for(int i=1; i<=row; i++)
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





