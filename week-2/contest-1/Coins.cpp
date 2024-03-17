#include<stdio.h>
int main()
{
    long long n , s, i, j, k;

    scanf("%lld %lld", &n , &s);

   if(s%n==0)
   {
       printf("%d\n", s/n);

   }
  else
   {
      i=s/n;

      j=s-i*n;

      printf("%d", ++i);

  }

return 0;
}
