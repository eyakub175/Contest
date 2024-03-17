#include<stdio.h>
#define MAX 100
int main()
{
    int n, arr[MAX], hard=0, easy=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]!=0)
        {
           hard++;
        }

    }
    if(hard>0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

return 0;

}
