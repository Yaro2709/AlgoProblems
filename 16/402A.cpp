#include<iostream>

using namespace std;

int main()
{
	int k, a, b, v;
	cin >> k >> a >> b >> v;
	int m = a / v;
	if (a % v != 0)
		m++;

	int n = b / (k - 1);
	int l = n * k;
	if (b % (k - 1) != 0)
	{
		n++;
		l += b % (k - 1) + 1;
	}
	if (m > l)
	{
		m -= l;
		cout << m + n;
	}
	else
	{
		int c = m / k;
		if (m % k != 0)
			c++;
		cout << c;
	}

	return 0;
}