#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		int minus = n, plus = n;
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int j = 0; j < n; j++)cin >> b[j];
		for (int i = 0; i < n; i++) {
			if (a[i] == -1) {
				minus = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) { plus = i; break; }
		}
		int flag = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (b[i] > a[i] and plus >= i)flag = 1;
			if (b[i] < a[i] and minus >= i)flag = 1;
		}
		if (flag)	cout << "NO" << endl;
		else		cout << "YES" << endl;
	}

	return 0;
}