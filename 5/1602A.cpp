#include<iostream>
#include<algorithm>

using namespace std;

void solve()
{
	string s, p;
	cin >> s;
	p = s;

	sort(p.begin(), p.end());

	cout << p[0] << " ";

	int c = 0, n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == p[0] && c == 0)
		{
			c++;
			continue;
		}
		cout << s[i];
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}