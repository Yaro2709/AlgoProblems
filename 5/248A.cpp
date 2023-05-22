#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x) a++;
		if (y) b++;
	}

	cout << min(n - a, a) + min(n - b, b);

	return 0;
}