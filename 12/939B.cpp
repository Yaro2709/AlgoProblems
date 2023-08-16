#include <iostream>

using namespace std;

int main()
{
	long long int n, k, i;
	cin >> n >> k;
	long long int *arr = new long long int[k];
	for (i = 0; i < k; i++)
	{
		cin >> arr[i];
	}
	long long int m = n % arr[0], x = arr[0], p = 0;
	for (i = 0; i < k; i++)
	{
		if (m > (n % arr[i]))
		{
			m = n % arr[i];
			x = arr[i];
			p = i;
		}
	}
	cout << p + 1 << " " << n / x;

	delete[] arr;
}