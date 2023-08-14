#include <iostream>

using namespace std;

const int maxn = 100000 + 100;
int a[maxn];

int main()
{
	int n, t, x = 1;
	cin >> n >> t;
	for (int i = 1; i < n; i++)
		cin >> a[i];
	while (x < t)
		x += a[x];
	if (x == t)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}