#include<iostream>

using namespace std;

int main()
{
	long long int t; 
	cin >> t;
	while (t--)
	{
		long long int z, n; 
		cin >> n;
		long long int cnt = 0;
		while (n > 1)
		{
			cnt++;
			z = 2;
			while ((n - z) >= 0)
			{
				n = n - z;
				z += 3;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}