#include <iostream>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		string str; 
		cin >> str;
		if (str == "^") {
			cout << 1 << endl; 
			continue;
		}
		else if (str == "_") {
			cout << 2 << endl; 
			continue;
		}
		bool ok = false; 
		int ans = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '^') {
				ok = true;
			}
			else {
				if (!ok) ans++;
				ok = false;
			}
		}
		if (!ok) ans++;
		cout << ans << endl;
	}

	return 0;
}