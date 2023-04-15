#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		string s, s1;
		cin >> s;
		s1 = s;

		sort(s.begin(), s.end());

		int co = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != s1[i])co++;
		}

		cout << co << endl;
	}

	return 0;
}