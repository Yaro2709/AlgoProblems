#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int long long k;
	cin >> k;
	while (k--) {
		int long long n;
		cin >> n;

		int long long* a = new int long long[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}

		cout << abs(sum) << endl;

		delete[] a;
	}
	
	return 0;
}