#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=i+1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
               swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0;i<n/2;i++){
        printf("%d %d\n",b[i],b[n-i-1]);
    }
    return 0;
}
