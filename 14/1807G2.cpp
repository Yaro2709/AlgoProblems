#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long long a, b, c, d, e, f, g;
	long long dat[200000];
	bool can;
	cin >> a;
	while (a--)
	{
		cin >> b;
		for (c = 0; c < b; c++) {
			cin >> dat[c];
		}
		sort(dat, dat + b);
		if (dat[0] != 1) {
			can = false;
		}
		else
		{
			can = true;
			d = 1;
			for (c = 1; c < b && can; c++)
			{
				if (d >= dat[c])
					d += dat[c];
				else
					can = false;
			}
		}
		if (can)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}