#include<iostream>
#include<algorithm>

using namespace std;

long long int a[200005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, c;
		cin >> n >> c;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			a[i] += i;
		}
		long long s = 0;
		sort(a + 1, a + 1 + n);
		int id = 0;
		for (int i = 1; i <= n; i++) {
			s += a[i];
			if (s <= c) {
				id = i;
				continue;
			}
			else {
				break;
			}
		}
		cout << id << '\n';
	}

	return 0;
}