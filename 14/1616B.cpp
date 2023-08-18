#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int k = 0;
		char tem = s[0];
		for (int i = 1; i < n; i++) {
			if (i == 1 && s[i] == tem) {
				break;
			}
			else if (s[i] <= tem) {
				tem = s[i];
				k = i;
			}
			else if (s[i] > tem) break;
		}
		for (int j = 0; j <= k; j++) cout << s[j];
		for (int j = k; j >= 0; j--) cout << s[j];
		cout << '\n';
	}
	return 0;
}