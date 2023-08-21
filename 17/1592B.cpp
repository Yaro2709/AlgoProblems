#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		for (int i = 1; i <= n; i++)
		{
			cin >>a[i];
			b[i] = a[i];
		}
		if (n >= 2 * x)
			cout << "YES" << endl;
		else
		{
			sort(b + 1, b + 1 + n);
			int flag = 0;
			for (int i = n - x + 1; i <= x; i++)
			{
				if (a[i] != b[i])
				{
					flag = 1;
					break;
				}
			}
			if (!flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}