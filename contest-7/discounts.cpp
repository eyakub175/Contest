#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,k,sum=0;
	cin>>n;
	int a[n];

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n,greater<int>());
	cin>>k;
	for(ll i=0;i<k;i++)
	{
		ll x;
		cin>>x;
		cout<<sum-a[x-1]<<"\n";
	}
}
