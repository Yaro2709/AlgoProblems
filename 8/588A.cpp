#include <iostream>

using namespace std;

int main()
{
	int n, ans = 0;
	int mn = 101;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		mn = min(mn, b);
		ans += a * mn;
	}
	cout << ans << endl;

	return 0;
}