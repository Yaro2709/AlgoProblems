#include <iostream>

using namespace std;

int cnt[1005];

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "YES" << endl;
		return 0;
	}

	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		cnt[s[i]]++;
		if (cnt[s[i]] > 1)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}