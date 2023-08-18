#include<iostream>

using namespace std;

int main()
{
	int n, k, cnt = 0, r;
	cin >> n;
	while (n > 9)
	{
		r = n % 10;
		cnt = cnt + 10 - r;
		n = n / 10;
		n++;
		while (n % 10 == 0)
			n = n / 10;

	}
	cout << cnt + 9 << endl;

	return 0;
}