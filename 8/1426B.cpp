#include <iostream>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	bool flag = 1;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (b == c)flag = 0;
	}
	if (flag || m % 2 != 0)cout << "NO\n";
	else cout << "YES\n";
}


int main() 
{
	int t; 
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}