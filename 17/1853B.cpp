#include<iostream>

using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for (int second_o = 0; second_o <= n; second_o++)
	{
		int second = second_o;
		int first = n;
		bool situable = true;
		for (int i = 0; i < k; i++)
		{
			if (second < 0)
			{
				situable = false;
				break;
			}
			int tmp = first - second;
			first = second;
			second = tmp;
		}
		if (situable)
			++ans;
	}
	cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}