#include<iostream>

using namespace std;

string s[1005][3];

int main()
{
	int m, t = 0;
	cin >> m;
	for (int i = 1, j; i <= m; ++i)
	{
		string a, b;
		cin >> a >> b;
		for (j = 0; j < t; ++j)
			if (s[j][1] == a)
			{
				s[j][1] = b;
				break;
			}
		if (j == t)
		{
			s[t][0] = a;
			s[t][1] = b;
			++t;
		}
	}
	cout << t << endl;
	for (int i = 0; i < t; ++i)
		cout << s[i][0] << " " << s[i][1] << endl;

	return 0;
}