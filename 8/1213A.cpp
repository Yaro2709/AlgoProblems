#include <iostream>

using namespace std;

int main()
{
	int a, i, x, y, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a % 2 == 1)
			x++;
		else
			y++;
	}
	cout << min(x, y);

	return 0;
}