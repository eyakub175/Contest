/*
    Time Duration: 25 minutes.
    Problem 7 : In this problem you have to search for a number in the array

 */

#include <stdio.h>
int main()
{
    int size, num,i, j, flag;
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }

    scanf("%d", &num);
     flag = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i] == num)
        {
           flag = 1;

        }

    }
    if (flag == 1)
    {
      printf("The number is in the array.\n");

    }
    else
    {
       printf("The number is not in the array.\n");

    }

    return 0;
}
