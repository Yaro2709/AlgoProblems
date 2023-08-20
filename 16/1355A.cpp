#include<iostream>

using namespace std;

#define ll long long int

int main() {
	int t; 
	cin >> t;
	ll a, k;
	while (t--) {
		cin >> a >> k;
		for (int i = 1; i < k; ++i) {
			int maximum = 0; int minimum = 9;
			ll temp = a;
			while (temp && ((maximum != 9) || (minimum != 0))) {
				maximum = max(maximum, int(temp % 10));
				minimum = min(minimum, int(temp % 10));
				temp /= 10;
			}
			if (minimum == 0)	break;
			a += maximum * minimum;
		}
		cout << a << endl;
	}

	return 0;
}