#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d1 = 0, d2 = 0;
		string str;
		cin >> n >> str;

		for (int i = 0; i < n; i++)
			if (str[i] == '>')
			{
				d1 = i;
				break;
			}

		for (int i = n - 1; i >= 0; i--)
			if (str[i] == '<')
			{
				d2 = n - 1 - i;
				break;
			}

		int ans = d1 < d2 ? d1 : d2;
		cout << ans << "\n";
	}

	return 0;
}