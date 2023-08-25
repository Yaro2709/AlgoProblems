#include<iostream>

using namespace std;

int main()
{
	int t, i, a, b, c;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		i = (b + c - a) / 2;
		if (b + c - a < 0)
			cout << c + 1 << "\n";
		else if (c - i < 0)
		{
			cout << 0 << "\n";
		}
		else
			cout << c - i << "\n";
	}
	return 0;
}