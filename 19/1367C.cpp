#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, i, b = 0, j, d;
		cin >> n >> k;
		char a[200006];
		cin >> a;
		for (i = 0; i < n;)
		{
			d = 0;
			for (j = i; j < i + k + 1; j++)
			{
				if (a[j] == '1')
				{
					i = j + k + 1;
					d = 1;
					break;
				}
				if (j == n - 1)
				{
					break;
				}
			}
			if (d != 1)
			{
				i = i + k + 1;
				b++;
			}
		}
		cout << b << "\n";
	}

	return 0;
}