
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

            }
        }
     }
    for(i=0; i<n*n; i++)
    {
        for(j=0; j<n-1; j++)
        {

        if(a[i]<a[j+1])
        {
            printf("%d%d, ",a[i],a[j+1]);
        }

        }
    }

    return 0;
}

