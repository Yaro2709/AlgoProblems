#include<iostream>

using namespace std;

int a[200005];

void Solve() {
	int n, K;
	cin >> n >> K;
	for (int i = 1; i <= n; i++)cin >> a[i];
	int ans = 0;
	for (int i = 30; i >= 0; i--) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)if (!(a[j] & (1 << i)))cnt++;
		if (cnt <= K)K -= cnt, ans |= 1 << i;
	}
	cout << ans << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--)Solve();

	return 0;
}