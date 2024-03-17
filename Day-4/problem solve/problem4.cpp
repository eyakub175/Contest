
/*
    Time Duration: 4 minutes.
    Problem 4: Given a list of numbers. Save the numbers in an Array. Finally, reverse the array elements and output in a line separated by space.
*/

#include <stdio.h>

int main()

{


int size;

scanf("%d",&size);

int arr[size];

for(int i=0;i<size;i++)
{
 scanf("%d", &arr[i]);
}

for(int i=size-1; 0<=i; i--)
{

    printf("%d ", arr[i]);
}



return 0;

}

