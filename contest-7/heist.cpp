#include <cstdio>
#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int n;
int temp[1005];

int main() {
	scanf("%d", &n);
	for (int i = 1;i <= n;++i)
        {
		scanf("%d", &temp[i]);
	}
	sort(temp + 1, temp + 1 + n);

//	for (int i = 1;i <= n;++i)
//        {
//		printf("%d", temp[i]);
//	}

	printf("%d\n", temp[n] - temp[1] + 1 - n);

	return 0;
}

