#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == 0 || b == 0 || c == 0) { int cnt = 0; if (a & 1)cnt++; if (b & 1)cnt++; if (c & 1)cnt++; if (d & 1)cnt++; if (cnt == 0 || cnt == 1)cout << "YES" << endl; else cout << "NO" << endl; }
		else { int cnt = 0; if (a & 1)cnt++; if (b & 1)cnt++; if (c & 1)cnt++; if (d & 1)cnt++; if (cnt != 2)cout << "YES" << endl; else cout << "NO" << endl; }
	}

	return 0;
}