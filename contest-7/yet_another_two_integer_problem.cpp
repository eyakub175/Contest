#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a, b ,sub, x, y, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);

        sub = abs(a-b);
        x = sub/10;
        y = sub-x*10;

        if(y>0)
        {
            x++;

        }
        printf("%d\n", x);


    }


return 0;
}
