
#include<stdio.h>
main()
{
    int a[10],i,j,temp,n, count=0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
       for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                count++;
            }
        }
     }
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
      printf("%d", count);
    return 0;
}
