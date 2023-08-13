#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans;
		for (int i = 0; i < n; i++)
		{
			if (ans.size() < 2 && s[i] % 2 == 1)
				ans += s[i];
			if (ans.size() == 2)
				break;

		}

		if (ans.size() == 2)
			cout << ans << endl;
		else
			cout << "-1" << endl;
	}

	return 0;
}