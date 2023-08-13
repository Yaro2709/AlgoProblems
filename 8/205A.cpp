#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int b = 1000000001, x = 0, y = 0;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		if (a == b) {
			y = 1;
		}
		if (a < b)
		{
			b = a;
			y = 0;
			x = i;
		}
	}
	if (y) {
		cout << "Still Rozdil";
	}
	else {
		cout << x;
	}

	return 0;
}