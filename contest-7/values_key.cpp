#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fun(string s1,string s2)
{
	int flag=0;
	for(int i=0;i<s1.length();i++)
	{
		if(int(s1[i])<int(s2[i]))
		{
			flag=1;
			break;
		}
	}
	if(flag){
		cout<<"-1"<<"\n";
	}
	else
	{
		cout<<s2<<"\n";
	}
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	fun(s1,s2);
}
