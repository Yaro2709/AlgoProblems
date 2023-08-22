#include<iostream>

using namespace std;

int main()
{
	int t;
	long long int n, x, y, d, a1, a2, a3, f, f2;
	cin >> t;
	while (t--)
	{
		cin >> n >> x >> y >> d;
		a1 = 0; a2 = 0; a3 = 0; f = 0; f2 = 0;
		x--;
		y--;
		n--;
		if (abs(x - y) % d == 0)
		{
			a1 = abs(x - y) / d; f = 1;
		}
		else if (y % d == 0)
		{
			a1 = (y / d) + (x / d);
			if (x % d != 0)
				a1++;
			f = 1;
		}
		if ((n - y) % d == 0)
		{
			a2 = ((n - y) / d) + ((n - x) / d);
			if (n - x != 0)
				a2++;
			f2 = 1;
		}
		if (f2 == 1 && f == 1)
			cout << min(a2, a1) << endl;
		else if (f2 == 1)
			cout << a2 << endl;
		else if (f == 1)
			cout << a1 << endl;
		else
			cout << -1 << endl;
	}

	return 0;
}