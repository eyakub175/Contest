#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	ll used,ans;
	if(e>f)
    {
		used=min(a,d);
        ans=used*e+min(b,min(c,d-used))*f;
	else
	{
		used=min(b,min(c,d));
		ans=used*f+min(a,d-used)*e;
	}
	cout<<ans<<endl;
	return 0;
}
