#include<iostream>
#include<string.h>

using namespace std;

int main() {
	int l = 0, k, c = 0, f = 0;
	string s;
	cin >> s >> k;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '*' && s[i] != '?')
		{
			l++;
		}
		else if (s[i] == '*')
			c++;
		else if (s[i] == '?')
			f++;
	}
	if (l == k)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != '*' && s[i] != '?')
			{
				cout << s[i];
			}
		}
	}
	else if (l < k)
	{
		if (c == 0)
			cout << "Impossible";
		else
		{
			int j = 1;
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] != '?' && s[i] != '*')
				{
					cout << s[i];
				}
				else if (s[i] == '*' && j <= (k - l))
				{
					while (j <= (k - l))
					{
						cout << s[i - 1];
						j++;
					}
				}
			}
		}
	}
	else if (l > k)
	{
		if ((l - k) > (c + f))
		{
			cout << "Impossible";
		}
		else
		{
			int j = 1;
			for (int i = 0; j <= (l - k); i++)
			{
				if (s[i] == '*' || s[i] == '?')
				{
					s[i - 1] = '*';
					j++;
				}
			}
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] != '*' && s[i] != '?')
				{
					cout << s[i];
				}
			}
		}
	}
	return 0;
}