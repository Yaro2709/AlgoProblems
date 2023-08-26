#include<iostream>
#include<map>
#include<cstring>

using namespace std;

int list[10] = { 3,4,6,7,9 };
map<int, int>mp;

int main()
{
	int t;
	cin >> t;
	mp[0] = 0, mp[1] = 1, mp[2] = 5, mp[5] = 2, mp[8] = 8;
	while (t--)
	{
		int h, m, a, b, c, d, flag = 0;
		cin >> h >> m;
		string str;
		cin >> str;
		a = str[0] - '0', b = str[1] - '0', c = str[3] - '0', d = str[4] - '0';
		int hour = a * 10 + b, minute = c * 10 + d;
		for (int i = hour; i < h; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i == hour && j == 0)
					j = minute;
				a = i / 10, b = i % 10, c = j / 10, d = j % 10;
				int q = 0;
				for (int i = 0; i < 5; i++)
				{
					if (a == list[i] || b == list[i] || c == list[i] || d == list[i])
					{
						q = 1;
					}
				}
				if (q)
					continue;
				a = mp[a], b = mp[b], c = mp[c], d = mp[d];
				if (d * 10 + c <= h - 1 && b * 10 + a <= m - 1)
				{
					flag = 1;
					cout << mp[a] << mp[b] << ":" << mp[c] << mp[d] << endl;
					break;
				}
			}
			if (flag)
				break;
		}
		if (!flag)
			cout << "00:00" << endl;
	}
	return 0;
}