#include<iostream>

using namespace std;

int solve() {
	int n;

	string s;
	cin >> n >> s;

	if (n == 1) {
		cout << "-1" << " " << "-1" << endl;
		return 0;
	}

	for (int i = 0; i < n - 1; i++) {
		if (s[i] != s[i + 1]) {
			cout << i + 1 << " " << i + 2 << endl;
			return 0;
		}
	}

	cout << "-1" << " " << "-1" << endl;

	return 0;
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