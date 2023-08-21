#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	bool oe = false;
	int upper = 0;
	int lower = 0;
	for (int i = 0; i < n; i++) {
		int u, l;
		cin >> u >> l;
		upper += u;
		lower += l;
		if (!oe && ((l % 2) + (u % 2)) == 1)oe = true;
	}
	int status = upper % 2 + lower % 2;
	if (status == 0)cout << 0;
	else if (status == 2 && n > 1 && oe)cout << 1;
	else cout << -1;

	return 0;
}