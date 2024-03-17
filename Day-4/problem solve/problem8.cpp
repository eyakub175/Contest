/*
    Time Duration: 7 minutes.
    Problem 7 : In this problem you have to find the minimum and maximum value from a given array

 */

#include <stdio.h>
int main()
{
    int size,i, max, min, j;
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }


        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf(" %d\n", max);
    printf(" %d\n", min);

 return 0;
}
