#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
#include <math.h>
#include <map>
#include <queue>
#include <set>
#include <stack>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
using namespace std;
const int MAXN=1e6+50;
const int inf=0x3f3f3f3f;
const int M=5000*4;
int a[150];
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int f=0,pos=0;
		rep(i,1,n){
			cin>>a[i];
			if(a[i]%2==0){
				pos=i;
			}
		}
		if(n==1&&a[1]%2==1){
			cout<<-1<<endl;
			continue;
		}
		if(pos!=0){
			cout<<1<<endl;
			cout<<pos<<endl;
			continue;
		}
		cout<<2<<endl;
		cout<<1<<" "<<2<<endl;
	}
    return 0;
}


//#include<cstdio>
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=1010;
//int a[N];
//int sum;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		sum=0;
//		int pos=0;
//		for(int i=1;i<=n;i++)
//		{
//			cin>>a[i];
//			sum+=a[i];
//			if(a[i]%2)
//				pos=i;
//		}
//		if(sum%2==0)
//		{
//			cout<<n<<endl;
//			for(int i=1;i<=n;i++)
//				cout<<i<<" ";
//			cout<<endl;
//		}
//		else if(sum%2==1)
//		{
//			if(n==1)
//				cout<<"-1"<<endl;
//			else
//			{
//				cout<<n-1<<endl;
//				for(int i=1;i<=n;i++)
//				{
//					if(i==pos)
//						continue;
//					else
//						cout<<i<<" ";
//				}
//				cout<<endl;
//			}
//		}
//	}
//}

