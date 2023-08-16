#include <iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while (q--)
	{
		string x, y;
		cin >> x >> y;
		int c = 0;
		int n = x.length();
		for (int i = 0; i < x.length(); i++)
		{
			int it = y.find(x[i]);
			if (it != string::npos)
			{
				c = 1;
				cout << "YES\n";
				break;
			}
		}
		if (c == 0)
			cout << "NO\n";
	}

	return 0;
}