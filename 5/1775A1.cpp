#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int q = 1;
		cout << s[0] << " ";
		if (s[1] == 'b') {
			for (int i = 1; i < s.size() - 1; i++) {
				cout << s[i];
			}
			cout << " " << s[s.size() - 1];
		}
		else {
			cout << s[1] << " ";
			for (int i = 2; i < s.size(); i++) {
				cout << s[i];
			}
		}
		cout << endl;
	}

	return 0;
}