
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n++;
    while(n%3!=0)
    {
        n++;
    }
    printf("%d\n",n);

    return 0;
}
