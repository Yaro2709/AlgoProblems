#include <iostream>

using namespace std;

void solve() 
{
	int n; 
	string s; 
	cin >> n >> s;

	int l = -1, r = -1;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R' && l == -1)l = i;
		if (s[i] == 'L')r = i;
	}

	if (l == -1 or r == -1) {
		cout << -1 << endl;
		return;
	}

	if (l < r) {
		cout << 0 << endl;
		return;
	}

	cout << r + 1 << endl;
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