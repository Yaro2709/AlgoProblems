#include <iostream>
#include <cmath>

using namespace std;

int ans = -20000000;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (pow((int)sqrt(a), 2) != a)
			ans = max(ans, a);
	}
	cout << ans << endl;

	return 0;
}