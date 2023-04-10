#include <iostream>
#include <string>

using namespace std;

int a[105];

int main()
{
	int t, n, m, p, x;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cin >> s;
		p = x = 0;
		if (s[0] != 'm' && s[0] != 'M')
		{
			cout << "NO" << endl;
			continue;
		}
		a[0] = 1;
		for (int i = 1; i < n; i++)
		{
			if (s[i] == 'm' || s[i] == 'M')
				a[i] = 1;
			else if (s[i] == 'e' || s[i] == 'E')
				a[i] = 2;
			else if (s[i] == 'o' || s[i] == 'O')
				a[i] = 3;
			else if (s[i] == 'w' || s[i] == 'W')
				a[i] = 4;
			else
				a[i] = -1;
			if (a[i]<a[i - 1] || a[i]>a[i - 1] + 1)
				x++;
		}
		if (a[n - 1] != 4)
			x++;
		if (x)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}