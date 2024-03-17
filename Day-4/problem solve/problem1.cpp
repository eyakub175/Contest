
/*
    Time Duration: 1 minutes.
    Problem 1: Take an input N. In the next line input N integers. Print this N integers in separate lines.
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

for(int i=0; i<size; i++)
{

    printf("%d\n", arr[i]);
}

return 0;

}
