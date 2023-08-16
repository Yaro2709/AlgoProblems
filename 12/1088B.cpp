#include <iostream>
#include <algorithm>

using namespace std;

long long n, k, data[1000005];

int main()
{
	int n, k, j = 0;
	long a[100000];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int key = 0;
	for (int i = 0; i < k; i++)
	{
		while (a[j] - key == 0 && j < n - 1)
			j++;
		cout << a[j] - key << endl;
		key += a[j] - key;
		if (a[j] - key != 0)
			key -= a[j];
	}

	return 0;
}