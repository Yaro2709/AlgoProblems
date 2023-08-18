#include<iostream>

using namespace std;

int main() {
	long long int n, m, i, j, h, a[101], x = 0, y = 0;
	string s[101], l, k, o;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> s[i];
		a[i] = 0;
	}
	for (i = 0; i < n; i++) {
		if (a[i] != 0) continue;
		for (j = i + 1; j < n; j++) {
			for (h = 0; h < m; h++) {
				if (s[i][h] != s[j][m - 1 - h]) {
					break;
				}
			}
			if (h == m) {
				a[i] = 1;
				a[j] = -1;
				break;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] != 0) continue;
		for (j = 0; j < m; j++) {
			if (s[i][j] != s[i][m - 1 - j]) {
				break;
			}
		}
		if (j == m) {
			o = s[i];
			x++;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (a[i] == 1) l += s[i];
	}
	if (x != 0) l += o;
	for (i = n - 1; i >= 0; i--) {
		k = s[i];
		reverse(k.begin(), k.end());
		if (a[i] == 1) l += k;
	}
	cout << l.size() << endl;
	cout << l << endl;

	return 0;
}