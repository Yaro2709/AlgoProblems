#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
	while (t--)
	{
		int px, py;
		cin >> px >> py;
		string s;
		cin >> s;
		int a, b;
		a = b = 0;
		for (char ch : s)
		{
			int x = 0, y = 0;
			if (ch == 'U')
				y++;
			if (ch == 'D')
				y--;
			if (ch == 'R')
				x++;
			if (ch == 'L')
				x--;
			if (y and py / abs(py) == y)
				b += y;
			if (x and px / abs(px) == x)
				a += x;
		}
		if (abs(a) >= abs(px) and abs(b) >= abs(py))
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