#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int x;
		int sum = 0;
		int neg = 0;
		int small = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> x;
				small = min(small, abs(x));
				if (x < 0)
				{
					neg++;
				}
				sum += abs(x);
			}
		}

		if (neg % 2 == 0)
		{
			cout << sum << endl;
		}
		else
		{
			cout << sum - 2 * abs(small) << endl;
		}
	}

	return 0;
}