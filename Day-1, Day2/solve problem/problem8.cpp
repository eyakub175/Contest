/*
    Time Duration: 5 minutes .
    Problem 8: You are given an input N as array size then You are given N element of the array. You have to find all possible pairs formed by the values of the array.
*/


#include<stdio.h>
int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%d%d,", arr[i],arr[j]);

        }


    }


return 0;

}

