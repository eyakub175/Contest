/*
    Time Duration: 1 minutes.
    Problem 1: Given a number X. Check whether X is positive,negative or zero.
*/


#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x>0)
    {
       printf("positive number\n");

    }
    else if(x<0)
    {
        printf("negative number\n");

    }
    else
    {
        printf("zero");
    }


    return 0;
}

