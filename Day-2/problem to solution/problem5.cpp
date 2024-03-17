/*
    Time Duration: 1 minutes.
    Problem 1: Given a number X. Check whether X is Even or Odd.
*/


#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x ,&y);
    if(x%y==0)
    {
       printf("YES\n");

    }
    else
    {
        printf("NO\n");

    }

    return 0;

}


