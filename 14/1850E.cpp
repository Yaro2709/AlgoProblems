#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, c;
		cin >> n >> c;
		long long int sum = 0;
		long long int ping = 0;
		for (int i = 0; i < n; i++)
		{
			long long int s;
			cin >> s;
			sum = sum + 4 * s;
			ping = ping + s * s;
		}
		ping = ping - c;
		cout << (long long int)(-sum + (long double)sqrt((long double)sum * sum - (long double)16 * n * ping)) / (8 * n) << "\n";
	}
	return 0;
}