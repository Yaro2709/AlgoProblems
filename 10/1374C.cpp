#include <iostream>

using namespace std;

int main() {

	long long int t, n;
	cin >> t;
	while (t--) {
		string s;
		cin >> n >> s;
		long long int total = 0, open = 0, closed = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				open++;
			}
			else {
				closed++;
			}

			if (closed > open) {
				total++;
				open++;
			}
		}
		cout << total << "\n";
	}

	return 0;
}