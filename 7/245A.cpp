#include <iostream>

using namespace std;

int main()
{
	int t, n, x, y, a = 0, b = 0, all = 0, bll = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t >> x >> y;
		if (t == 1)
			all += x + y,
			a += x;
		else
			bll += x + y,
			b += x;
	}

	if (a >= all / 2)	cout << "LIVE\n";
	else				cout << "DEAD\n";
	if (b >= bll / 2)	cout << "LIVE\n";
	else				cout << "DEAD\n";

	return 0;
}