#include<bits/stdc++.h>
#define ll long long int
#define size 10E9
using namespace std;


int main()
{

ll t, i;
ll arr[3];
cin>>t;

while(t--)
{

    for(i=0; i<3; i++)
    {

        cin>>arr[i];
    }



    cout<< max(arr[0],max(arr[1],arr[2]))<<endl;

}

return 0;
}
