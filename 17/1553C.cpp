#include<iostream>

using namespace std;

const int N = 30;
char s[N];
int t;

void solve()
{
	int x0 = 0;
	int x1 = 0;
	int x = 0;
	int y = 0, y1 = 0, y0 = 0;
	int ans = 0;
	int flag = -1;
	for (int i = 0; i < 10; i++)
	{
		ans++;
		if (i % 2)
		{
			if (s[i] == '0') x0++;
			else if (s[i] == '1') x1++;
			else x++;
		}
		else
		{
			if (s[i] == '0') y0++;
			else if (s[i] == '1') y1++;
			else y++;
		}
		if ((x1 + x) > 5 || (y1 + y) > 5 || (x1 + x) - y1 > 5 - (i + 2) / 2)
		{
			cout << ans << endl;
			flag = 1;
			return;
		}
		if ((y1 + y) - x1 > 5 - (i + 1) / 2)
		{
			cout << ans << endl;
			flag = 1;
			return;
		}
	}
	cout << ans << endl;
	return;

}

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> s;
		solve();
	}
	return 0;
}