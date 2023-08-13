#include <iostream>

using namespace std;

void solve()
{
	int n, a, ct = 0;
	cin >> n;
	bool seq = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (seq == true)
		{
			if (a == 0)
			{
				ct++;
				seq = false;
			}
		}
		else
		{
			if (a != 0)
				seq = true;
		}
	}
	if (seq == true)
		ct++;
	cout << min(2, ct) << endl;
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