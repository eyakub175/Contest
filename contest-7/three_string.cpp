#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define N 100006

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>s>>s1>>s2;

    n=l(s);


    fr(i,n)
    {
        swap(s[i], s2[i]);
        if( s[i] ==s1[i] )cnt++;
        else
        {
        swap(s[i], s2[i]);
        swap(s1[i], s2[i]);

        if(s[i] ==s1[i]) cnt++;
        }

    }

    if(cnt==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }

return 0;
}
