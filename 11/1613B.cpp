#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;
int a[N];

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n / 2; i++)
		{
			cout << a[i + 1] << " " << a[0] << endl;
		}
	}
	return 0;
}