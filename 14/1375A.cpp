#include<iostream>

using namespace std;

void solve()
{
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		x = abs(x);
		if (i % 2 == 0)
			x = -x;
		cout << x << ' ';
	}
	cout << "\n";
}

int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}