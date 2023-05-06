#include<iostream>

using namespace std;

using ll = long long;

int main() 
{
	ll t;
	cin >> t;
	while (t--) {
		ll l1, l2, r1, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (l2 < l1) {
			swap(l1, l2);
			swap(r1, r2);
		}

		if (r1 < l2)
			cout << l1 + l2 << endl;
		else
			cout << l2 << endl;
	}

	return 0;
}