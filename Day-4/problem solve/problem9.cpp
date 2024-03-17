/*
    Time Duration: 20 minutes.
    Problem 9 : in this problem you will given a array and a index number and a new number for insert

 */

#include<stdio.h>
int main()
{
    int size, position, i,num, j;
    scanf("%d", &size);
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
   size++;
   scanf("%d", &position);
   scanf("%d", &num);

   for(i=size; i>=position; i--)
   {
    arr[i] = arr[i-1];
    arr[position-1]=num;

    }


   for(i=0; i<size; i++)
   {
       printf("%d ", arr[i]);
   }


}
