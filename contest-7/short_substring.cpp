#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {



	ll t;
	cin >> t;

	while (t--) {

		string b;
		cin >> b;

		ll len = b.length();

		if (len == 2) {
			cout << b << "\n";
		}
		else
		{

			string a;

			a += b[0];
			a += b[1];

			for (ll i = 3; i < len; i += 2) {
				a += b[i];
			}

			cout << a << "\n";
		}

	}


	return 0;
}

