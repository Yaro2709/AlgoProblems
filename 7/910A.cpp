#include <iostream>
#include <string>

using namespace std;

int i, cnt;

int main()
{
	int n, d;
	bool f;
	cin >> n >> d;
	string s;
	cin >> s;
	while (i + 1 < n)
	{
		f = true;
		for (int j = i + d; j > i; j--)
		{
			if (s[j] == '1')
			{
				cnt++;
				i = j;
				f = false;
				break;
			}
		}
		if (f)
		{
			cout << -1;
			return 0;
		}
	}
	cout << cnt;

	return 0;
}