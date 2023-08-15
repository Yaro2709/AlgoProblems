#include <iostream>

using namespace std;

long long int ans;

int main()
{
	int t, n, m, min, num, i, j, x, y;
	int mmin, mnum;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ans = 0;
		mmin = INT_MAX;
		mnum = INT_MAX;
		for (i = 0; i < n; ++i)
		{
			cin >> m;
			cin >> x >> y;
			if (x > y)
			{
				min = y;
				num = x;
			}
			else
			{
				num = y;
				min = x;
			}
			for (j = 2; j < m; ++j)
			{
				cin >> x;
				if (x <= min)
				{
					num = min;
					min = x;
				}
				else if (x < num)
				{
					num = x;
				}
			}
			if (min <= mmin)
				mmin = min;
			if (num <= mnum)
				mnum = num;
			ans += num;
		}
		cout << ans - mnum + mmin << "\n";
	}
	return 0;
}