#include <iostream>

using namespace std;

int main() 
{
	int n, k; 
	cin >> n >> k;

	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count = 0;
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] <= k) { 
			count++; 
			index = i; 
		}
		else break;
	}

	for (int i = n - 1; i > index; i--)
	{
		if (a[i] <= k) { 
			count++; 
		}
		else break;
	}

	cout << count << endl;

	delete[] a;

	return 0;
}