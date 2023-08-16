#include <iostream>

using namespace std;

int main()
{
	long long int n, k;
	cin >> n >> k;
	long long int i, j = 0;
	for (i = 1; j < k; i++)
	{
		j += i;
	}
	for (i--; j > k; j--)
	{
		i--;
	}
	while (i--)
	{
		cin >> n;
	}
	cout << n;

	return 0;
}