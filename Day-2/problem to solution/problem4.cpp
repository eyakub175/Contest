/*
    Time Duration: 1 minutes.
    Problem 4: Given a number X. Check whether X is Even or Odd.
*/


#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x%2==0)
    {
       printf("%d is an even integer\n", x);

    }
    else
    {
        printf("%d is an odd integer\n", x);

    }

    return 0;

}

