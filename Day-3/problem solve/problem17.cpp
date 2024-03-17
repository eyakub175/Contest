#include<stdio.h>

int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    while(n%2==0)
    {
        n/=2;
        cnt++;
    }
    printf("%d %d\n",n,cnt);

    return 0;
}

