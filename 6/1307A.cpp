#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, d;
		cin >> n >> d;
		int ans = 0;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			if (j == 0)
				ans = a;
			else
			{
				if (d >= j * a)
					ans += a, d = d - j * a;
				else
					ans += d / j, d = 0;
			}
		}
		cout << ans << endl;
	}

	return 0;
}