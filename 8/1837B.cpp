#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int cnt = 1, mx = 1;
		for (int i = 1; i < n; i++)
		{
			if (s[i] == s[i - 1])
			{
				cnt++;
			}
			else
			{
				cnt = 1;
			}
			mx = max(mx, cnt);
		}
		cout << mx + 1 << endl;
	}

	return 0;
}