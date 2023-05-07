#include <iostream>

using namespace std;

void solve() 
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int c = 0;
	int ans = 0;
	int i = s.size() - 1;
	while (s[i] == ')') {
		c++;
		i--;
	}

	ans = s.size() - c;

	if (ans < c) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}