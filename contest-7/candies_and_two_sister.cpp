#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    	int n;
    	scanf("%d", &n);
    	int res = 0;
		if(n < 2) {
			res = 0;
		} else if(n % 2 == 0) {
			res = n / 2 - 1;
		} else {
			res = n / 2;
		}

		printf("%d\n", res);
	}

	return 0;
}
