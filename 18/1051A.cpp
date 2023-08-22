#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	long long int t, i, j, a = 0, b = 0, c = 0;
	char s[200];
	cin >> t;
	for (i = 0; i < t; i++)
	{
		a = 0;
		b = 0;
		c = 0;
		cin >> s;
		for (j = 0; j < strlen(s); j++)
		{
			if (s[j] >= 48 && s[j] <= 57)
				a++;
			else if (s[j] >= 'a' && s[j] <= 'z')
				b++;
			else if (s[j] >= 'A' && s[j] <= 'Z')
				c++;
		}

		if (!c)
		{
			if (a > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 48 && s[j] <= 57)
					{
						s[j] = 'A'; a--; break;
					}
			}
			else if (b > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 'a' && s[j] <= 'z')
					{
						s[j] = 'A'; b--; break;
					}
			}
		}
		if (!b)
		{
			if (a > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 48 && s[j] <= 57)
					{
						s[j] = 'a'; a--; break;
					}
			}
			else if (c > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 'A' && s[j] <= 'Z')
					{
						s[j] = 'a'; c--; break;
					}
			}
		}
		if (!a)
		{
			if (c > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 'A' && s[j] <= 'Z')
					{
						s[j] = '1'; c--; break;
					}
			}
			else if (b > 1)
			{
				for (j = 0; j < strlen(s); j++)
					if (s[j] >= 'a' && s[j] <= 'z')
					{
						s[j] = '1'; b--; break;
					}
			}
		}
		cout << s << endl;
	}
	return 0;
}