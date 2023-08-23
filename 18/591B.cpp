#include<iostream>

using namespace std;

int main()
{
	int n, m; string s;
	cin >> n >> m >> s;
	char t[26];
	for (int i = 0; i < 26; i++)
	{
		t[i] = 'a' + i;
	}
	for (int i = 0; i < m; i++)
	{
		char x, y; cin >> x >> y;
		for (int j = 0; j < 26; j++)
		{
			if (t[j] == x)
			{
				t[j] = y;
			}
			else if (t[j] == y)
			{
				t[j] = x;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		s[i] = t[s[i] - 'a'];
	}
	cout << s;

	return 0;
}