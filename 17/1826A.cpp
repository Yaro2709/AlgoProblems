#include<iostream>

using namespace std;

int a[205];
int b[205];
string s;

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, i, j;
		cin >> n;
		for (i = 0; i <= n; i++) {
			b[i] = 0;
		}
		int ans = 0;
		for (i = 1; i <= n; i++) {
			cin >> a[i];
			b[a[i]]++;
		}
		for (i = 1; i <= n; i++) {
			b[i] += b[i - 1];
		}
		int flag = 0;
		for (i = 0; i <= n; i++) {
			if (n - b[i] == i) {
				cout << i << endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0) cout << "-1" << endl;
	}

	return 0;
}