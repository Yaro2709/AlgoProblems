#include <iostream>

using namespace std;

char a[102][102];

int main()
{
	int i, j, n, t, k;
	k = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			t = 0;
			if (a[i - 1][j] == 'o')
				t++;
			if (a[i][j - 1] == 'o')
				t++;
			if (a[i][j + 1] == 'o')
				t++;
			if (a[i + 1][j] == 'o')
				t++;
			if (t % 2 != 0)
				k++;
		}
	}
	if (k > 0)
		cout << "NO";
	else
		cout << "YES";

	return 0;
}