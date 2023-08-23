#include<iostream>

using namespace std;

int x[1050], ans[1050];

int main() {
	bool flag;
	int n, t1, t2, cnt = 0;
	cin >> n;
	cin >> x[0];
	t1 = x[0];
	for (int i = 1; i < n; ++i) {
		cin >> t2;
		x[i] = t2 - t1;
		t1 = t2;
	}
	for (int i = 1; i <= n; ++i) {
		flag = true;
		for (int k = 0; k < i; ++k) {
			for (int j = 0; j + i + k < n; j += i) {
				if (x[k + j] != x[k + j + i]) {
					flag = false;
					break;
				}
			}
			if (!flag) break;
		}
		if (flag) {
			++ans[i];
			++cnt;
		}
	}
	cout << cnt << endl;
	for (int i = 1; i <= n; ++i)
		if (ans[i])	cout << i << ' ';
	return 0;
}
