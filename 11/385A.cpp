#include <iostream>

using namespace std;

int main()
{
	long long int n, i, j, c, a[102], mx;
	cin >> n >> c;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i < n; i++)
		if (a[i] - a[i + 1] > mx)
			mx = a[i] - a[i + 1];
	if (mx > c)
		cout << mx - c;
	else
		cout << 0;
	return 0;
}