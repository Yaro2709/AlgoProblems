#include<iostream>

using namespace std;

const int N = 101;

long long a[N];

int main()
{
	int t;
	int n;
	long long h;
	int i;
	long long l, r, mid;
	long long sum;

	cin >> t;
	while (t--)
	{
		cin >> n >> h;
		for (i = 1; i <= n; i++)
			cin >> a[i];
		for (l = 0, r = h; l + 1 < r; )
		{
			mid = (l + r) / 2;
			for (i = 1, sum = mid; i < n; i++)
				sum += min(mid, a[i + 1] - a[i]);
			if (sum >= h)
				r = mid;
			else
				l = mid;
		}
		cout << r << endl;
	}

	return 0;
}