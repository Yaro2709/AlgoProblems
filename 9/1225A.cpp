#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 9 and b == 1)
	{
		cout << 9 << " " << 10;
	}
	else if (a < b and b - a == 1)
	{
		cout << a << 99 << " " << b << "00";
	}
	else if (a == b)
	{
		cout << a << 10 << " " << b << 11;
	}
	else {
		cout << -1;
	}

	return 0;
}