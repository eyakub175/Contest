#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[2005],b[2005];
int main(){
	int n;
	scanf("%d",&n);
	int ta=0,tb=0;
	for(int i=0,t;i<n;i++){
		scanf("%d",&t);
		t&1?a[ta++]=t:b[tb++]=t;
	}
	if(ta==tb)printf("0");
	else{
		sort(a,a+ta);
		sort(b,b+tb);
		int sum=0;
		if(ta>tb)for(int i=0;i<ta-tb-1;i++)sum+=a[i];
		else for(int i=0;i<tb-ta-1;i++)sum+=b[i];
		printf("%d",sum);
	}
}
