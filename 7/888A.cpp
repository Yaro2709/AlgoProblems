#include<iostream>

using namespace std;

int main()
{
	int n, count = 0; 
	cin >> n;
	int a[1007];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n - 1; i++) {
		if ((a[i] < a[i - 1] && a[i] < a[i + 1]) || a[i] > a[i - 1] && a[i] > a[i + 1]) {
			count += 1;
		}
	}
	cout << count << endl;

	return 0;
}