#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin>>t;

	int n;

	bool flag=true;
	int a, ab;

	while (t--)
        {
		cin>>n;

		flag=true;

		cin>>ab;

		for (int i=1;i<n;i++)
        {
			cin>>a;

			if (a-ab>1 or ab-a>1)
				flag=false;
		}
		if (flag)

			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
}
