#include <iostream>

using namespace std;

int main()
{
	int n;
	int d = 0;
	int mi = 5000;
	cin >> n;
	int *ar = new int[n];
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	for (int i = 0; i < n - 1; i++)
		d = max(d, ar[i + 1] - ar[i]);
	for (int i = 1; i < n - 1; i++)
		mi = min(mi, max(d, ar[i + 1] - ar[i - 1]));
	cout << mi;

	delete[] ar;

	return 0;
}