#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n;
		cin >> n;

		int* a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				a[i] = 1;
				ans++;
			}
		}

		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}

		while (sum == 0) {
			sum += 1;
			ans++;
		}

		cout << ans << endl;

		delete[] a;
	}

	return 0;
}