#include<iostream>
#include<string.h>

using namespace std;

int a[200005][30];

void pre() {
	memset(a, 0, sizeof(a));
	for (int j = 0; j <= 24; j++) {
		for (int i = 1; i <= 200005; i++) {
			a[i][j] = a[i - 1][j] + !(i >> j & 1);
		}
	}
	return;
}

int main() {
	pre();
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		int ans = 200005;
		for (int i = 0; i <= 24; i++) {
			ans = min(ans, a[r][i] - a[l - 1][i]);
		}
		cout << ans << endl;
	}
	return 0;
}