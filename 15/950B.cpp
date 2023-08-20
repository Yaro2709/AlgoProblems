#include<iostream>

using namespace std;

int x[100010], y[100010];

int main() {
	int n, m;
	cin >> n >> m;
	int t;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		x[i] = x[i - 1] + t;
	}
	for (int j = 1; j <= m; j++) {
		cin >> t;
		y[j] = y[j - 1] + t;
	}
	int now = 1, ans = 0;
	for (int i = 1; i <= n; i++) {
		while (y[now] < x[i]) {
			now++;
		}
		if (y[now] == x[i]) {
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}