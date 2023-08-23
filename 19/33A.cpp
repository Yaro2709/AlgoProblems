#include<iostream>

using namespace std;

const int N = 1e5 + 1;
int mn[N];

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= m; i++) {
		mn[i] = 1e9;
	}

	for (int i = 0; i < n; i++) {
		int a, r; cin >> a >> r;
		mn[a] = min(mn[a], r);
	}

	int ans = 0;
	for (int i = 1; i <= m; i++) {
		ans += mn[i];
	}

	return 0;
}