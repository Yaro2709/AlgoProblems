#include<iostream>

using namespace std;

int main()
{
	int t, n, k;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n >> k >> s;
		int l = -1, c = 0, la = -1;
		for (int i = 0; i < n; i++)
			if (s[i] == '*')
			{
				if (l == -1)
				{
					c++;
					l = i;
					s[l] = 'x';
				}
				else if (i - l > k)
				{
					c++;
					s[la] = 'x';
					l = la;
				}
				la = i;
			}
		for (int i = n - 1; i > 0; i--)
			if (s[i] == '*')
			{
				if (i != l)
					c++;
				break;
			}
		cout << c << endl;
	}

	return 0;
}