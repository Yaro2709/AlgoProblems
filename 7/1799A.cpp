#include<iostream>

using namespace std;

int s[100010];
int ans[100010];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int cnt;
		cnt = n;
		int a;
		for (int i = 1; i <= n + m; i++) s[i] = 0, ans[i] = -1;
		for (int i = 1; i <= m; i++)
		{
			cin >> a;
			if (!s[a] && cnt >= 1) ans[cnt--] = i;
			s[a]++;
		}
		for (int i = 1; i <= n; i++) cout << ans[i] << " ";
		cout << endl;
	}

	return 0;
}