#include<iostream>

using namespace std;

int a[2555];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt = 1, cnn = 0;
		for (int i = 1; i <= n * n; i++) {
			if (i % 2 == 0) {
				a[i] = n * n - cnn;
				cnn++;
			}
			else {
				a[i] = cnt;
				cnt++;
			}
		}
		int now = 1;
		for (int i = 1; i <= n; i++) {
			if (i % 2) {
				for (int j = now; j < now + n; j++) {
					cout << a[j] << ' ';
				}
				now += n;
			}
			else {
				now += n;
				for (int j = now - 1; j >= now - n; j--) {
					cout << a[j] << ' ';
				}
			}
			cout << '\n';
		}
	}

	return 0;
}