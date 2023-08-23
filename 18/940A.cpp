#include<iostream>
#include<algorithm>

using namespace std;

long long int a[100000];

int main() {
	long long int n, d, i, j, ans = 0;

	cin >> n >> d;
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[j] - a[i] > d)
				break;
		}
		ans = max(j - i, ans);
	}
	cout << (n - ans) << "\n";

	return 0;
}