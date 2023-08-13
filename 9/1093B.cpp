#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		bool t = 0;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] != s[i - 1])t = 1;
		}
		sort(s.begin(), s.end());
		if (t == 0) { cout << "-1" << endl; }
		else cout << s << endl;
	}

	return 0;
}