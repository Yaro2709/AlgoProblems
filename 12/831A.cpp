#include <iostream>

using namespace std;

const int N = 100;
int a[N];

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int p = 2;
	while (a[p] > a[p - 1]) p++;
	while (a[p] == a[p - 1]) p++;
	while (a[p] < a[p - 1]) p++;
	if (p <= n) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0;
}