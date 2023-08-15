#include <iostream>
#include <algorithm>

using namespace std;

int a[200005];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int ans = 0, i = 0;
	while (i < n)
	{
		if (a[i] >= ans + 1)
			ans++;
		i++;
	}
	cout << ans << endl;

	return 0;
}