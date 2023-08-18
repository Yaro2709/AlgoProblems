#include<iostream>

using namespace std;

int main() {
	int long long t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int long long n = s.size();
		if (n == 1) {
			cout << 1 << endl;
		}
		else {
			int long long l = n - 1, r = 0;
			for (int long long i = 0; i < n; i++) {
				if (s[i] == '0') {
					l = i;
					break;
				}
			}
			for (int long long i = n - 1; i >= 0; i--) {
				if (s[i] == '1') {
					r = i;
					break;
				}
			}
			cout << abs(l - r) + 1 << endl;
		}
	}
	return 0;
}