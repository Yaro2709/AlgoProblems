#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		if (n == 1) { 
			cout << "YES" << endl; 
		}
		else if (n == 2) {
			if (s[0] == '1' && s[1] == '0') {
				cout << "YES" << endl;
			}
			else if (s[0] == '0' && s[1] == '1') {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}