#include<iostream>

using namespace std;

int main()
{
	int n, d, i;
	cin >> n;
	if (n & 1)
	{
		n = (n + 1) / 2;
		d = n * (n + 1) / 2;
		cout << d * 4 << endl;
	}
	else
	{
		cout << ((n / 2) + 1) * ((n / 2) + 1);
	}

	return 0;
}