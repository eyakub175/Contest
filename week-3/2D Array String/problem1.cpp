#include <stdio.h>
#include <string.h>
int main()
{
    int n, z=0, o=0, index=0, dlt=0, len, i;
    char s[200005];
    while(scanf("%d",&n)==1)
    {

    scanf("%s", s);
    len=strlen(s)

    for(i=0;i<len; i++)
    {

        if(s[i]=='1')
        {
             index++;
             break;
        }

    }
    len=len-index;
    for(int j=index; j<len; index++)
    {
        if(s[j]=='1' and s[j+1]=='0')
        {

            dlt++;
        }
        else


    }




}
 return 0;
}
