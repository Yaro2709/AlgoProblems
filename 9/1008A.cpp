#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int len;
	len = s.length() - 1;
	for (int i = 0; i < len; ++i) {
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n') {
			if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u') {
				cout << "NO";
				return 0;
			}
		}
	}
	if (s[len] != 'a' && s[len] != 'e' && s[len] != 'i' && s[len] != 'o' && s[len] != 'u' && s[len] != 'n') {
		cout << "NO";
		return 0;
	}
	cout << "YES";

	return 0;
}