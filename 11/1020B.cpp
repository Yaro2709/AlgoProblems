#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int *boole = new int[n];
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			boole[j] = true;

		int x = i;
		while (boole[x])
		{
			boole[x] = false;
			x = a[x];
		}
		cout << x << " ";
	}

	delete[] a;
	delete[] boole;

	return 0;
}