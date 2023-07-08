#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, l, r;
		cin >> l >> r;

		if (r < 2 * l)  cout << "YES" << endl;   //x mod a >= a/2
		else			cout << "NO" << endl;
	}

	return 0;
}