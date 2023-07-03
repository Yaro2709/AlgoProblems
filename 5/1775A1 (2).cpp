#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		int n = s.size();
		if (s[1] == 'a') {
			cout << s[0] << " ";
			cout << s[1] << " ";
			cout << s.substr(2, n - 2) << endl;
		}
		else {
			cout << s[0] << " ";
			cout << s.substr(1, n - 2) << " ";
			cout << s[n - 1] << endl;
		}
	}

	return 0;
}