#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		int cnt[101] = { 0 };
		for (int i = 0; i < k; i++)
		{
			cnt[v[i]]++;
		}
		int minn = 1e9;
		int d = 0;
		for (int i = 1; i <= 100; i++)
		{
			d = 0;
			for (int j = 0; j < n;)
			{
				if (v[j] != i)d++, j += k;
				else j++;
			}
			minn = min(minn, d);
		}
		cout << minn << "\n";
	}

	return 0;
}