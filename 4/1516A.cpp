#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x;
		cin >> x;
		int z = x;

		vector<int>a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n - 1; i++)
		{
			if (x >= a[i])
			{
				x -= a[i];
				a[i] = 0;
			}
			else
			{
				a[i] -= x;
				x = 0;
				break;
			}
		}

		a[n - 1] += z - x;

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}