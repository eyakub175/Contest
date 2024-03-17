
/*
    Time Duration: 1 minutes.
    Problem 5: Write a program in C to merge two arrays.
*/

#include <stdio.h>

int main()

{
    int size1, size2 ,i, j, merge[100];

    scanf("%d", &size1);

    int arr1[size1];

   for(i=0; i<size1; i++)
   {

    scanf("%d", &arr1[i]);
    merge[i]=arr1[i];


   }
   j=i;

   scanf("%d", &size2);

    int arr2[size2];

   for(i=0; i<size2; i++)
   {
    scanf("%d", &arr2[i]);
    merge[j]=arr2[i];
    j++;

   }
   for(i=0; i<j; i++)
   {
       printf("%d ", merge[i]);

   }






return 0;

}

