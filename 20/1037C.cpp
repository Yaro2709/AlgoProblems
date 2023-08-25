#include<iostream>

using namespace std;

int main() {
	int n, ans;
	cin >> n;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			if (a[i] != a[i + 1] && a[i + 1] == b[i]) {
				swap(a[i], a[i + 1]);
				ans++;
				i++;
			}
			else {
				a[i] = b[i];
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}