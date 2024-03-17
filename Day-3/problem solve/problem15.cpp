#include<stdio.h>

int main()
{
    int n,m,rev=0;
    scanf("%d %d",&n,&m);
    while(m)
    {
        rev*=10;
        rev+=(m%10);
        m/=10;
    }
    while(rev)
    {
        n*=10;
        n+=(rev%10);
        rev/=10;
    }
    printf("%d\n",n);

    return 0;
}
