#include<iostream>
#include<string>

using namespace std;

int main() {
	int t, c, n;
	string s;
	cin >> t;
	while (t--)
	{
		c = 0;
		cin >> s;
		n = s.length();
		if (n == 1)
			c = 0;
		else
		{
			for (int i = 1; i < n; i++)
			{
				if (s[i] == s[i - 1] && s[i - 1] != '#')
				{
					c++;
					s[i] = '#';
				}
				else if (i >= 2 && s[i] == s[i - 2] && s[i - 2] != '#')
				{
					c++;
					s[i] = '#';
				}
			}
		}
		cout << c << "\n";
	}
	return 0;
}