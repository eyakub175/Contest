#include<bits/stdc++.h>
#define ll long long int
#define size 10E9
using namespace std;

int main()
{
    ll t;

    cin>>t;

    ll arr[t], arr1[t];

    for(int i=0; i<t; i++)
    {

        cin>>arr[i];

    }
    ll x = 0;

    for(int i=0; i<t; i++)
    {
        arr1[i] = arr[i]+x;
        x = max(x, arr1[i]);

        cout<<arr1[i]<<" ";


    }


//    sort(arr, arr+t);
//
//    arr[t-1]--;

//    for(int i=0; i<t; i++)
//    {
//
//        arr1[i]=arr[i];
//        //cout<<arr1[i];
//
//    }
//     for(int i=0; i<t; i++)
//    {
//
////        arr1[i]=arr[i];
////        //cout<<arr1[i];
//      arr2[i]=arr1[i]-arr[i];
//
//
//    }
//     for(int i=0; i<t; i++)
//    {
//
//      cout<<arr2[i]<<" ";
//
//    }

return 0;


}
