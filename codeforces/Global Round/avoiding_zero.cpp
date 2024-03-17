#include<bits/stdc++.h>
using namespace std;
int solve()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
        {
		cin>>a[i];
		sum+=a[i];
	}
	if(sum==0)
	{
		puts("NO");
		return 0;
	}
	puts("YES");
	if(sum>0)

	sort(a,a+n, greater<int>());
	else
	sort(a,a+n);

	for(int b:a) cout<<b<<" ";

	puts("");
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
