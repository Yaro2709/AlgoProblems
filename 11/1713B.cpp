#include <iostream>

using namespace std;

int main()
{
	int i, j, t, n, m, w, la;
	int a;
	cin >> t;
	while (t--)
	{
		cin >> n;
		a = 0;
		la = 0;
		for (i = 1; i <= n; i++)
		{
			cin >> w;
			if (a == 0 && w < la)
				a = 1;
			if (a == 1 && w > la)
				a = 2;
			la = w;
		}
		if (a == 2)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}