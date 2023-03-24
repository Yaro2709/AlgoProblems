#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int ans = 0;
		for (long long int i = 1; i * i <= n; i++) {
			if (i * i <= n) {
				ans++;
			}
			if (i * i * i <= n && sqrt(i * i * i) != int(sqrt(i * i * i))) { 
				ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}