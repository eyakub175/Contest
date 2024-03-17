#include<stdio.h>

int main()
{
    int n,mul=1;
    scanf("%d",&n);
    while(n--)
    {
        mul*=n+1;
    }
    printf("%d\n",mul);

    return 0;
}
