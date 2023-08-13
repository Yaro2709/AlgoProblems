#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		long long int x;
		cin >> x;

		long long  int ans = 1;
		for (int i = x; i >= 1; i--) {
			ans = ans * i % 1000000007;
		}
		ans = (long long int)(ans * (x * (x - 1) % 1000000007) % 1000000007) % 1000000007;
		cout << ans % 1000000007 << endl;
	}
	return 0;
}