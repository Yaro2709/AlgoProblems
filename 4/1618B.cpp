#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		int n; 
		cin >> n;
		vector<string> s(n - 2);
		for (auto& e : s) {
			cin >> e;
		}

		string ans;
		ans.push_back(s[0][0]);
		for (int i = 0; i < n - 3; i++)
		{
			ans += s[i][1];
			if (s[i][1] != s[i + 1][0]) {
				ans += s[i + 1][0];
			}
		}

		ans += s.back()[1];
		if (ans.size() != n) {
			ans += 'a';
		}

		cout << ans << endl;
	}

	return 0;
}