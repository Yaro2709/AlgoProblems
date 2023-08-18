#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n + 1);
		int ans = 0;
		int flag = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] != i && flag == 1) flag = 0, ans = a[i];
			else if (a[i] != i) ans = ans & a[i];
		}
		cout << ans << endl;
	}

	return 0;
}