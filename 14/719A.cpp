#include<iostream>

using namespace std;

int main()
{
	long n, i, k, a[100];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (a[n] == 15)
		cout << "DOWN";
	else if (a[n] == 0)
		cout << "UP";
	else if (n == 1)
		cout << -1;
	else if (a[n] > a[n - 1] && a[n] != 15)
		cout << "UP";

	else cout << "DOWN";

	return 0;
}