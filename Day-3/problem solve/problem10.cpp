#include<stdio.h>

int main()
{
    int p,b,mul=1;
    scanf("%d %d",&b,&p);
    while(p--)
    {
        mul*=b;
    }
    printf("%d\n",mul);

    return 0;
}
