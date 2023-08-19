#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int key;
	cin >> key;
	bool flag = true;
	int t;
	for (int i = 0; i < 2 * n; i++) {
		cin >> t;
		if (flag) {
			if (t == key || 7 - t == key)
				flag = false;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}