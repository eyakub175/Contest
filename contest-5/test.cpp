#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
        {
        char str[100];
        scanf("%s",str);
        int flag = 0, n = strlen(str)/2;
        for(int j = 0; j < n; j++)
        {
            if(str[j]!= str[strlen(str)-(j+1)])
        {
                flag = 1;
                break;
        }
        }
        if(!flag)

        printf("Case %d: Yes\n",i);

        else

        printf("Case %d: No\n",i);
    }

    return 0;
}

