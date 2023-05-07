#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << (s.size() - 1) * 9 + (s[0] - '0') << endl;
	}

	return 0;
}