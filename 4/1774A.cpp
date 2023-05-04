#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, i = 0, j;
		cin >> n;
		string s;
		cin >> s;
		if (s[0] == '0') i = 0;
		else i = 1;
		for (j = 1; j < n; j++)
		{
			if (s[j] == '1')
			{
				if (i == 1)
				{
					cout << '-';
					i = 0;
				}
				else
				{
					cout << '+';
					i = 1;
				}
			}
			else cout << '+';
		}
		cout << endl;
	}

	return 0;
}