#include<iostream>

using namespace std;

const int N = 2e5 + 10;
int a[N], b[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int l = 1e9, r = 0;
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
			if (a[i] != b[i]) {
				l = min(l, i);
				r = max(r, i);
			}
		}

		for (int i = l - 1; i >= 1; i--) {
			if (b[i] <= b[l]) l--;
			else break;
		}
		for (int i = r + 1; i <= n; i++) {
			if (b[i] >= b[r]) r++;
			else break;
		}

		cout << l << " " << r << endl;
	}

	return 0;
}