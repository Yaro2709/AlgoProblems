#include <iostream>

using namespace std;

int a[1110][2];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int x, y;
		cin >> x >> y;
		bool jdg = false;
		for (int i = 1; i <= k; i++)
		{
			int c, d;
			cin >> c >> d;
			if ((abs(c - x) + abs(d - y)) % 2 == 0)
			{
				jdg = true;
			}
		}
		cout << (jdg ? "NO" : "YES") << endl;
	}
	return 0;
}