#include<stdio.h>
int main()
{
    long long int x;
    int i;

    scanf("%lld", &x);
    if(x%5==0)
    {
        printf("%d\n", x/5);
    }
    else
    {

      i=x/5;

      printf("%d\n", ++i);

    }
return 0;

}
