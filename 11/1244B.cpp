#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	string str;
	while (t--)
	{
		cin >> n;
		int ans = n;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '1')
			{
				ans = max(ans, i + 1 + i + 1);
				int temp = str.length();
				ans = max(ans, temp * 2 - 2 * i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}