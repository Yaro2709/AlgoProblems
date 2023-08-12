#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		long long max1 = 0, min1 = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			min1 += a;
			max1 += (a + m - 1) / m;
		}
		min1 = (min1 + m - 1) / m;
		cout << min1 << " " << max1 << endl;
	}

	return 0;
}