#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//void fuc(int a, int b, int n)
//{
//
////    if(a>n || b>n)
////       {
////           a=a+b;
////       }
//
//
//
//}




int main()
{
    int t, count;
    ll a, b, n;
    cin>>t;

    while(t--)
    {

        cin>>a;
        cin>>b;
        cin>>n;

        count=0;


    while(a<n && b<n)
    {

        a=a+b;
        count++;
        cout<<"a:"<<a<<endl;
        if(a<=n)
        {
             b=b+a;
       cout<<"b:"<<b<<endl;
        count++;
        }




    }
   cout<<count<<endl;

    }

return 0;
}
