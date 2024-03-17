#include<stdio.h>
#include<string.h>
int main()
{
     int total,k,t,i;
      char str1[50];

    while(scanf("%d",&t)==1)
    {
        total=0;
        for(i=1;i<=t;i++)
        {
            scanf("%s",&str1);

            if(strcmp(str1,"donate")==0)
            {
                scanf("%d",&k);
                total+=k;
            }
            else
                printf("%d\n",total);
        }
    }
    return 0;
}
