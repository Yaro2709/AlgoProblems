#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int i, candyLeft = 0, given = 0;
	for (i = 0; i < n && given < k; ++i)
	{
		int c;
		cin >> c;
		candyLeft += c;

		int g = min(candyLeft, 8);
		given += g;
		candyLeft -= g;
	}
	cout << ((given >= k) ? i : -1) << endl;

	return 0;
}