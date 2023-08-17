#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s; 
		int zc, oc;
		zc = 0; 
		oc = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0')zc++;
			else oc++;
		}if (zc == 0 || oc == 0) {
			cout << s << endl;
			continue;
		}
		for (int i = 0; i < s.size(); i++)cout << s[0] << '1' - s[0];
		cout << endl;
	}

	return 0;
}