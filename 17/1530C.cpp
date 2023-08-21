#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(int& lhs, int& rhs)
{
	return lhs > rhs;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
			cin >> b[i];
		sort(a.begin(), a.end(), comp);
		sort(b.begin(), b.end(), comp);
		int k = (3 * n + 3) / 4;
		int sa = 0, sb = 0;
		for (int i = 0; i < k; ++i)
		{
			sa += a[i];
			sb += b[i];
		}
		int n0 = n, d = 0, ha = k - 1, hb = k;
		while (sa < sb)
		{
			++n; sa += 100;
			if ((3 * n + 3) / 4 > k)
			{
				++k;
				if (hb < n0)
					sb += b[hb++];
			}
			else
			{
				if (ha >= 0)
					sa -= a[ha--];
			}
		}
		cout << n - n0 << "\n";
	}

	return 0;
}