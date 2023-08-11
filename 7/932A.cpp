#include<iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s;
	for (int i = s.size() - 2; i >= 0; i--) {
		cout << s[i];
	}

	return 0;
}