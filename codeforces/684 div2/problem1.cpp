#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int a, n, y=0, h, b, x=0, t,z;
 string s;
 cin>>t;
 while(t--)
 {
     cin>>n, a, b, h;

     cin>>s;
     for(int i=0; i<n; i++)
     {
         if(s[i]=='0')
            x++;
         else
            y++;
     }
     z=min(a*n+y*h, min(b*n+x*h, x*a+y*b));
     cout<<z<<endl;

 }

    return 0;
}
