#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k, a[105], b[105];
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= k; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + k + 1);
	int cnt = k;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 0) {
			a[i] = b[cnt--];
		}
	}
	int flag = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i + 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}