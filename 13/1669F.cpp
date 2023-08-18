#include<iostream>

using namespace std;

const int N = 2e5;
int a[N];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int l = 0, r = n;
		int cnt1 = 0, cnt2 = 0, res = 0;
		while (l <= r)
		{
			if (cnt1 < cnt2) cnt1 += a[l++];
			else cnt2 += a[r--];
			if (cnt1 == cnt2) res = max(res, l - 1 + n - r);
		}
		cout << res << endl;
	}

	return 0;
}