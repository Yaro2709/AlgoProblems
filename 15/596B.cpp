#include<iostream>

using namespace std;

int main() {
	int n; 
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long  sum = abs(a[0]);
	int b = 0;
	for (int i = 0; i < n - 1; i++)
	{
		sum = sum + abs(a[i] - a[i + 1]);

	}
	cout << sum;
	
	delete[] a;

	return 0;
}