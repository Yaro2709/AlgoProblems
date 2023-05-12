#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		string s;
		cin >> s;

		s = '0' + s + '0';

		int f = 0;
		for (int i = 1; i + 1 < s.size(); i++) {
			if (s[i - 1] != s[i] && s[i] != s[i + 1]) {
				f = 1;
			}
		}

		cout << (f ? "NO" : "YES") << endl;
	}

	return 0;
}