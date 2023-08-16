#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int l1 = s1.size() - 1, l2 = s2.size() - 1;
		if (s1[0] == s2[0]) {
			cout << "YES" << endl;
			cout << s1[0] << "*" << endl;
		}
		else if (s1[l1] == s2[l2]) {
			cout << "YES" << endl;
			cout << "*" << s1[l1] << endl;
		}
		else {
			int flag = 0;
			for (int i = 0; i <= l1 - 1; i++) {
				for (int j = 0; j <= l2 - 1; j++) {
					if (s1[i] == s2[j] && s1[i + 1] == s2[j + 1]) {
						flag = 1;
						cout << "YES" << endl;
						cout << "*" << s1[i] << s1[i + 1] << "*" << endl;
						break;
					}
				}
				if (flag) break;
			}
			if (!flag) cout << "NO" << endl;
		}
	}
	return 0;
}