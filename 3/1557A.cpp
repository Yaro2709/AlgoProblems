#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		int ma = -10e9;

		double sum = 0;
		for (int i = 0; i < m; i++)
		{
			int a;
			cin >> a;
			if (a > ma) {
				ma = a;
			}
			sum += a;
		}
		cout << setprecision(11) << (double)(sum - ma) / (double)(m - 1) + ma << endl;
	}

	return 0;
}