#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[0])
		{
			cout << a[i];
			return 0;
		}
	}
	cout << "NO";

	delete[] a;

	return 0;
}