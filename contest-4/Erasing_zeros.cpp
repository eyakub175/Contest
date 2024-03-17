#include<stdio.h>
#include<string.h>
int main()
{
    int n, len;
    char str[100];
    scanf("%d",&n);

    while(n--)
    {
        int count=0, f1=0, e1=0;
         scanf("%s", str);

         len=strlen(str);

         for(int i=0; i<len; i++)
         {
             if(str[i]=='1')
             {
                 f1=i;

                 break;
             }

         }

         for(int j=len; j>0; j--)
         {
             if(str[j]=='1')
             {
                 e1=j;

                 break;
             }


         }


         for(int k=f1; k<e1; k++)
         {

             if(str[k]=='0')
             {
                 count++;
             }
         }
         printf("%d\n", count);

    }



return 0;

}

