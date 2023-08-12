#include <iostream>

using namespace std;

int x[100 * 1000 + 5];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	cout << x[1] - x[0] << ' ' << x[n - 1] - x[0] << endl;
	for (int i = 1; i < n - 1; i++)
		cout << min(x[i + 1] - x[i], x[i] - x[i - 1]) << ' ' << max(x[n - 1] - x[i], x[i] - x[0]) << endl;
	cout << x[n - 1] - x[n - 2] << ' ' << x[n - 1] - x[0] << endl;

	return 0;
}