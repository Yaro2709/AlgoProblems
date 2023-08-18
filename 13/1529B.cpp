#include<iostream>
#include<algorithm>

using namespace std;

int a[100005], b[100005];

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, ans;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		b[0] = INT_MAX;
		for (int i = 1; i < n; i++) {
			b[i] = min(a[i] - a[i - 1], b[i - 1]);
		}
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] <= b[i]) {
				ans = i + 1;
				break;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}