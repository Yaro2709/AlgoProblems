#include <iostream>

using namespace std;

int main() 
{
	int n; 
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int c;
	int min = abs(a[0] - a[n - 1]); 
	int b = 1; 
	int d = n;
	for (int i = 0; i <= n - 2; i++) { 
		c = abs(a[i + 1] - a[i]); 
		if (min > c) { 
			min = c; 
			b = i + 1; 
			d = i + 2; 
		} 
	}
	cout << b << " " << d;

	delete[] a;

	return 0;
}