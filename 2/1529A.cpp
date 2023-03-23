#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) 
	{
		int n;
		cin >> n;

		int a[1010];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int min = 100;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] <= min) {
				if (a[i] != min) {
					count = 0;
				}
				min = a[i];
				count++;
			}
		}
		cout << n - count << endl;
	}

	return 0;
}