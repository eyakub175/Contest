/*
    Time Duration: 20 minutes.
    Problem 6 : In this Problem there will be a given array size  and  element of the array
you have to take an element from the array and put it into a different array in the basis of their evenness
*/

#include <stdio.h>

int main()
{

int size, earr[100], i, e=0, o=0, osum=0, esum=0, oarr[100];
scanf("%d",&size);
int arr[size];
for(i=0; i<size; i++)
{
    scanf("%d", &arr[i]);

    if(arr[i]%2==0)

    {

        earr[e]=arr[i];
        e++;

    }
    else
    {

     oarr[o]=arr[i];
     o++;


    }
}

    printf("Even Array:");

    for(i=0; i<e; i++)
    {
        printf("%d ", earr[i]);
        esum+=earr[i];
    }

    printf("\nEven Sum: %d", esum);

    printf("\nOdd Array:");

    for(i=0; i<o; i++)
    {
        printf("%d ", oarr[i]);
        osum+=oarr[i];
    }

    printf("\nOdd Sum: %d\n", osum);


return 0;

}

