#include<stdio.h>
int main()
{
    int k, w, i, sum=0;
    long long int n;
    scanf("%d %lld %d", &k, &n, &w);

      for(i=1; i<=w; i++)
        {
            sum+=k*i;

        }
     if(sum>n)
     {
         printf("%d\n",sum-n);
     }
     else
     {
         printf("0\n");
     }
return 0;
}
