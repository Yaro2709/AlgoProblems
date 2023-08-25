#include<iostream>

using namespace std;

int main() {
	long long int n, m, i, j, s = 0, p = 0;
	cin >> n;
	long long int *a = new long long int[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		s = s + a[i];
	}
	p = 0;
	for (i = 0; i < n; i++)
	{
		p = p + a[i];
		if (p >= (s + 1) / 2)
		{
			cout << i + 1;
			break;
		}
	}

	delete[] a;

	return 0;
}