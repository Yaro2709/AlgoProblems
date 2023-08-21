#include<iostream>

using namespace std;

int main() {
	int t, i, n;
	cin >> t;
	while (t--) {
		string s;
		cin >> n >> s;
		long long a = n;
		for (i = 1; i < n; i++)
			if (s[i] != s[i - 1])
				a += i;
		cout << a << '\n';
	}

	return 0;
}