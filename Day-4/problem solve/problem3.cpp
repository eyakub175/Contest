
/*
    Time Duration: 1 minutes.
    Problem 3:
*/

#include <stdio.h>

int main()

{

   int size, i;
   scanf("%d", &size);
   int arr1[size], arr2[size];
   for(i=0; i<size; i++)
   {
       scanf("%d", &arr1[i]);
       arr2[i]=arr1[i];
   }

   for(i=0; i<size; i++)
   {
       printf("%d ", arr1[i]);


   }
   printf("\n");

 for(i=0; i<size; i++)
   {
       printf("%d ", arr2[i]);


   }



return 0;

}

