#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	string s1, s2;
	cin >> s1 >> s2;

	reverse(s2.begin(), s2.end());

	s1 = s1 + s2;
	int cnt = 0;
	for (int i = 0; i < a + b - 1; i++) {
		if (s1[i] == s1[i + 1]) {
			cnt++;
		}
	}

	if (cnt >= 2) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
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