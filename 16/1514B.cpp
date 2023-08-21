#include<iostream>

using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n, k;
		cin >> n >> k;
		long long int mod = 1e9 + 7;
		long long int ans = 1;
		for (long long int i = 1; i <= k; i++) {
			ans = ans * n % mod;
		}
		cout << ans % mod << endl;
	}

	return 0;
}