#include <iostream>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		long long int n, sum; 
		cin >> n;
		sum = (n * (n + 1)) / 2;
		for (int i = 1; i <= n; i = i * 2) {
			sum = sum - i * 2;
		}
		cout << sum << endl;
	}

	return 0;
}