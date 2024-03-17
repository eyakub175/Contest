
/*
    Time Duration: 1 minutes.
    Problem 1: Input N integers. Determine the average. Print the average with two digit after the decimal point.
*/

#include <stdio.h>

int main()

{
   int size, i, sum=0;
    float result;
   scanf("%d", &size);

   int arr[size];

   for(i=0; i<size; i++)
   {
       scanf("%d", &arr[i]);
       sum+=arr[i];
   }
   result = (sum*100/size);
   printf("%.2f", result);




return 0;

}

