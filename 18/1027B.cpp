#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int n, q;
	cin >> n >> q;
	while (q--)
	{
		int x, y;
		cin >> x >> y;
		if (((x + y) % 2) == 0)
		{
			long long int ans = 0;
			ans += ((x - 1) / 2) * n;
			if (x % 2 == 0)
				ans += ((n + 1) / 2) + (y / 2);
			else
				ans += (y + 1) / 2;
			cout << ans << "\n";
		}
		else
		{
			long long int ans = ceil((n * n) / 2.0);
			ans += ((x - 1) / 2) * n;
			if (x % 2 == 0)
				ans += (n / 2) + (y + 1) / 2;
			else
				ans += y / 2;
			cout << ans << "\n";
		}
	}
	return 0;
}