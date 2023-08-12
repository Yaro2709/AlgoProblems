#include <iostream>

using namespace std;

void solve() {
	long long int n;
	cin >> n;
	long long int x = 0;
	bool flag = 0;
	for (int i = 1; i <= n; i++) {
		int p;
		cin >> p;
		if (p + x < i - 1)flag = 1;
		x = x + p - i + 1;
	}
	if (flag)cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}