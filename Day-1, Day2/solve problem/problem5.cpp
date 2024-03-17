/*
    Time Duration: 5 minutes .
    Problem 5: Input a value N and print N lines in following way.
*/


#include<stdio.h>
int main()
{
    int row;
    scanf("%d", &row);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row-i; j++)
        {
            printf("*");

        }
        printf("\n");

        for(int k=0; k<=i; k++)
        {

            printf(" ");
        }




    }

return 0;

}



