#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		b--;
		c--;
		int size = (abs(a - b) - 1) * 2 + 2;
		if (size == 0 || (size <= a || size <= b || size <= c))
		{
			cout << -1 << endl;
		}
		else
		{
			cout << (c + size / 2) % size + 1 << endl;
		}
	}

	return 0;
}