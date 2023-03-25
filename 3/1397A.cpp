#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int c[26] = { 0 };
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;

			for (int j = 0; j < s.size(); j++)
			{
				c[s[j] - 'a']++;
			}
		}

		bool flag = 1;
		for (int i = 0; i < 26; i++)
		{
			if (c[i] % n != 0)
			{
				flag = 0;

				break;
			}
		}

		if (flag)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}