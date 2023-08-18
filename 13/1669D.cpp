#include<iostream>

using namespace std;

void solve() {
	int n; 
	cin >> n;
	string s; 
	cin >> s;
	bool r, b;
	r = b = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'W') {
			if (r != b) {
				cout << "NO" << endl;
				return;
			}
			r = b = 0;
		}
		else if (s[i] == 'R') {
			r = 1;
		}
		else {
			b = 1;
		}
	}
	if (r != b)cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main() {
	int t; 
	cin >> t;
	while (t--)solve();

	return 0;
}