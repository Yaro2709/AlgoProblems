#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int long long ans = 0; 
		int mx = 0;
		int n;
		cin >> n;
		for (int x, y, i = 1; i <= n; i++) {
			cin >> x >> y;
			if (x > y) swap(x, y);
			ans += x + x;
			mx = max(mx, y);
		}
		ans += mx + mx;
		cout << ans << '\n';
	}
	return 0;
}