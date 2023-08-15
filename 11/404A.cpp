#include <iostream>

using namespace std;

int main()
{
	int n, x = 1;
	cin >> n;
	string s[100000];
	char d, nd;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		if (i == 0)
		{
			d = s[i][i];
			nd = s[i][i + 1];
		}
		if (s[i][i] != d || s[i][n - 1 - i] != d)
			x = -1;
		for (int j = 0; j < n; j++)
		{
			if (j == i || i + j == n - 1)
				continue;
			if (s[i][j] != nd)
			{
				x = -1;
				break;
			}
		}
		if (d == nd)
			x = -1;
	}
	if (x == -1)
		cout << "NO\n";
	else
		cout << "YES\n";

	return 0;
}