#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int  cnt = 0, val = a[n - 1];
		for (int i = n - 2; i >= 0;) {
			if (a[i] != val) {
				i -= (n - i - 1);
				cnt++;
			}
			else
				i--;
		}
		cout << cnt << endl;
	}

	return 0;
}