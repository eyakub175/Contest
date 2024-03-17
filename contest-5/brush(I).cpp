#include <stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++){
        int sum = 0,n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
           int x;
           scanf("%d", &x);
           if(x >= 0)
            sum+=x;
        }
       printf("Case %d: %d\n", k, sum);
    }
    return 0;
}
