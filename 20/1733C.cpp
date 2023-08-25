#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << n - 1 << endl;
		if (n > 1)	cout << "1 " << n << "\n";

		if ((a[0] + a[n - 1]) % 2 == 0) {
			a[0] = a[n - 1];
		}
		else {
			a[n - 1] = a[0];
		}
		for (int i = 1; i < n - 1; i++) {
			if ((a[0] + a[i]) % 2 == 0) {
				cout << i + 1 << " " << n << "\n";
			}
			else {
				cout << 1 << " " << i + 1 << "\n";
			}
		}
	}
	return 0;
}