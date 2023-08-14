#include <iostream>

using namespace std;

char v[2005][2005];

bool is(string x)
{
	for (int i = 0; i < x.size() / 2; i++)
	{
		if (x[i] != x[x.size() - 1 - i])
			return false;
	}
	return true;
}

int main()
{
	string x;
	cin >> x;
	int ans = 0;
	for (int l = 1; l <= x.size(); l++)
	{
		for (int i = 0; i <= (x.size() - l); i++)
		{
			string y = x.substr(i, l);
			if (is(y) == false)
				ans = max(ans, l);
		}

	}
	cout << ans << endl;

	return 0;
}