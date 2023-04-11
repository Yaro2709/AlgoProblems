#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, k;

		cin >> n >> k;

		if (n % 2 == 0 && n < 2 * k) cout << "-1\n";
		else if (n % 2 != 0 && n + 1 < 2 * k) cout << "-1\n";
		else
		{
			int p = 0;
			for (int i = 0; i < n; i++)
			{

				for (int j = 0; j < n; j++)
				{

					if (i == j && i % 2 == 0 && p < k)
					{
						cout << "R";
						p++;
					}
					else
						cout << ".";
				}
				cout << endl;
			}
		}
	}

	return 0;
}