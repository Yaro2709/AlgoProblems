#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); ++i)
		{
			if (i % 2 == 0)
			{
				s[i] = s[i] == 'a' ? 'b' : 'a';
			}
			else
			{
				s[i] = s[i] == 'z' ? 'y' : 'z';
			}
		}
		cout << s << endl;
	}

	return 0;
}