#include <iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	for (int w = 0; w < q; w++)
	{
		int n, sum(0);
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x <= 2048)
			{
				sum += x;
			}
		}
		if (sum >= 2048)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}