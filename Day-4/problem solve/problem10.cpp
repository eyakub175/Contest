/*
    Time Duration: 15 minutes.
    Problem 10 :In this problem you have to take an array as input and an index_number  which one you have to delete
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

   scanf("%d", &position);


   if(position < 0 || position > size)
    {
        printf("Invalid Postion\n");
    }
    else
    {

        for(i=position; i<size; i++)
        {
            arr[i] = arr[i + 1];
        }

    }



    for(i=0; i<size-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
   }





