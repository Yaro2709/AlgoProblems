#include <iostream>

using namespace std;

int a[1000 * 100];

int main() {
	int n;
	cin >> n;
	int mins;
	cin >> a[0];
	mins = a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		mins = min(mins, a[i]);
	}
	bool check = true;
	for (int i = 0; i < n; i++) {
		if (a[i] % mins != 0)
			check = false;
	}
	if (check)
		cout << mins;
	else
		cout << -1;

	return 0;
}