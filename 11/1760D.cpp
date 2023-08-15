#include <iostream>

using namespace std;

int a[200005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int l = 0, r = 0, ans = 0, t1, t2;
		while (l < n) {
			while (a[r + 1] == a[l] && r + 1 <= n - 1)r++;
			t1 = 0, t2 = 0;
			if (l == 0)t1 = 1;
			else if (a[l - 1] > a[l])t1 = 1;
			if (r == n - 1)t2 = 1;
			else if (a[r] < a[r + 1])t2 = 1;
			if (t1 == 1 && t2 == 1)ans++;
			l++;
		}
		if (ans != 1)cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}