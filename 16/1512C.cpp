#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		string s; 
		cin >> s;

		int n = a + b, ques = 0;
		bool flag = 1;
		for (int i = 0; i < n; i++) {
			if (s[i] == '?') {
				s[i] = s[n - i - 1];
			}

			else if (s[i] != s[n - i - 1] && (s[i] != '?' && s[n - i - 1] != '?')) {
				flag = 0; break;
			}
		}
		if (flag == 0) { 
			cout << -1 << endl; continue;
		}

		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				if (a == 0) {
					flag = 0; break;
				}
				else a--;
			}
			else if (s[i] == '1') {
				if (b == 0) {
					flag = 0; break;
				}
				else b--;
			}
		}
		if (flag == 0 || (a % 2 == 1 && b % 2 == 1)) {
			cout << -1 << endl; continue;
		}

		if (n % 2 == 1) {
			if (s[n / 2] == '?') {
				if (a % 2 == 1) {
					s[n / 2] = '0'; a--;
				}
				else { s[n / 2] = '1'; b--; }
			}
		}

		for (int i = 0; i < n; i++) {
			if (s[i] == '?' && a != 0) {
				s[i] = '0'; s[n - i - 1] = '0';
				a -= 2;
			}
			else if (s[i] == '?') {
				s[i] = '1'; s[n - i - 1] = '1';
				b -= 2;
			}
		}

		cout << s << endl;
	}
	return 0;
}