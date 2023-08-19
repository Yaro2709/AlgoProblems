#include<iostream>

using namespace std;

int c[300005];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
	}
	int ans;
	for (int i = n; i >= 1; i--) {
		if (c[i] != c[1]) {
			ans = i - 1;
			break;
		}
	}
	int bns;
	for (int i = 1; i <= n; i++) {
		if (c[i] != c[n]) {
			bns = n - i;
			break;
		}
	}
	cout << max(bns, ans);

	return 0;
}