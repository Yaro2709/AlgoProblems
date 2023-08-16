#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, a = 0;
	cin >> n;
	string s;
	cin >> s;
	if (n > 26) {
		cout << -1 << endl;
	}
	else
	{
		sort(s.begin(), s.end());
		for (int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == s[i + 1])
				a += 1;
		}
		cout << a << endl;
	}

	return 0;
}