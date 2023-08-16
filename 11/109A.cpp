#include <iostream>

using namespace std;

int main()
{
	int n, c4 = -1, c7 = 0, ind = 0;
	cin >> n;
	while (n >= 0)
	{
		if (n % 4 == 0)
		{
			c4 = n / 4;
			c7 = ind;
		}
		n -= 7;
		ind++;
	}
	if (c4 < 0) {
		cout << -1 << endl;
	}
	else
	{
		for (int i = 0; i < c4; i++) {
			cout << 4;
		}
		for (int i = 0; i < c7; i++) {
			cout << 7;
		}
		cout << endl;
	}

	return 0;
}