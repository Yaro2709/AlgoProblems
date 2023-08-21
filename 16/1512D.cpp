#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, z = 0;
		cin >> n;
		long long *b = new long long[n + 2];
		for (int i = 0; i <= n + 1; i++)
		{
			cin >> b[i];
		}
		sort(b, b + n + 2);
		for (int i = 0; i <= n; i++)
		{
			z += b[i];
		}
		long long q = z - b[n];
		if (q == b[n])
		{
			for (int i = 0; i < n; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
		}
		else
		{
			long long x = z - b[n + 1];
			int j = -1;
			for (int i = 0; i <= n; i++)
			{
				if (b[i] == x)
				{
					j = i;
					break;
				}
			}
			if (j == -1)
			{
				cout << -1 << endl;
				continue;
			}
			for (int i = 0; i <= n; i++)
			{
				if (i == j)
					continue;
				else
					cout << b[i] << " ";
			}
			cout << endl;
		}
		delete[] b;
	}

	return 0;
}