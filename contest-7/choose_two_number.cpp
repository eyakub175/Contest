#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("D:\The Chance\contest-7\input.txt","r",stdin);
   // freopen ("D:\The Chance\contest-7\output.txt","w",stdout);
    int an, bn;

    cin>>an;

    int a[an];
    //cout<<sizeof(a)/sizeof(a[0]);

    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        cin>>a[i];
    }

    cin>>bn;

    int b[bn];

    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++)
    {

        cin>>b[i];
    }

sort(a, a+an);
sort(b, b+bn);


cout<<a[an-1]<<" "<<b[bn-1]<<endl;


}
