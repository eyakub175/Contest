#include<stdio.h>
#include<string.h>
#define size 105
int main()
{
    char str[size], count, str1[size];
     int arr[size]={'0'}, i;

    while(fgets(str, size, stdin) && !(str[i]=='0' && str[1]=='\0'))
    {

    while (str[count] != '\0')
    {
        count++;
    }
    str[count]= NULL;
    printf("%d\n", count);
    int len=count-1;

    for(int i=0; i<count; i++)
    {
        arr[i] += str[len];
        if(arr[i]>=10)
        {

            arr[i+1]+=arr[i]/10;
            arr[i]%=10;
        }

    }



}
for ( i = size - 1; i >= 0 && !arr[i]; i--);

    while (i >= 0)

        printf("%d", arr[i--]);
    putchar('\n');
    }


