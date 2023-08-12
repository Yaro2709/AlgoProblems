#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int r = 0;
	string t;
	for (int i = 0; i < n - 1; ++i) {
		int c = 0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j] == s[i] && s[j + 1] == s[i + 1])
				++c;
		if (r < c) {
			r = c;
			t[0] = s[i];
			t[1] = s[i + 1];
		}
	}

	cout << t[0] << t[1];

	return 0;
}