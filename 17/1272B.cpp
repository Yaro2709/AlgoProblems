#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int u = 0, d = 0, l = 0, r = 0;
		for (int i = 0; s[i]; i++)
		{
			if (s[i] == 'U')
				u++;
			else if (s[i] == 'D')
				d++;
			else if (s[i] == 'L')
				l++;
			else
				r++;
		}
		int s1 = min(l, r);
		int s2 = min(u, d);
		int v = 2 * min(l, r) + 2 * min(u, d);
		if (s1 == 0 && s2 != 0)
		{
			cout << 2 << endl;
			cout << "UD" << endl;
		}
		else if (s2 == 0 && s1 != 0)
		{
			cout << 2 << endl;
			cout << "LR" << endl;
		}
		else
		{
			cout << v << endl;
			for (int i = 1; i <= v; i++)
			{
				if (i <= s1)
				{
					cout << "L";
				}
				else if (i > s1 && i <= s1 + s2)
					cout << "U";
				else if (i > s1 + s2 && i <= 2 * s1 + s2)
					cout << "R";
				else
					cout << "D";
			}
			cout << endl;
		}
	}
	return 0;
}