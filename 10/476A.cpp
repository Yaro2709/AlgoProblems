#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int y = n / 2, i;
	for (i = y; i >= 0; i--)
	{
		if ((n - i) % m == 0)
		{
			cout << (n - i) << endl;
			break;
		}
	}

	if (i < 0)
		cout << "-1" << endl;

	return 0;
}