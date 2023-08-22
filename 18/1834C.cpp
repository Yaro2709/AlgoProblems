#include<iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int a = 0, b = 0;
	bool pa = true, pb = true;
	for (int i = 0; i < n; ++i) {
		a += (s[i] != t[i]);
		b += (s[i] != t[n - i - 1]);
	}
	if (b == 0) cout << min(2 * a - (a & 1), 2) << '\n';
	else cout << min(2 * a - (a & 1), 2 * b - (b % 2 == 0)) << '\n';
}

int main() 
{
	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}