#include<iostream>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int c = 0;
		string s;
		cin >> n;
		cin >> s;
		for (int i = 0; i < n - 2; i++)
		{
			if (s[i] == s[i + 2])
				c++;
		}
		cout << n - 1 - c << "\n";
	}
	return 0;
}