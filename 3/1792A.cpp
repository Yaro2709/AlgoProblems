#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	while (t--)
	{
		int n, a, x, y;
		x = y = 0;
		cin >> n;
		while (n--)
		{
			cin >> a;
			if (a > 1)
				y++;
			else
				x++;
		}
		cout << y + (x + 1) / 2 << endl;
	}

	return 0;
}