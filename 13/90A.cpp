#include<iostream>

using namespace std;

int main() {
	int a[3];
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	int counter = 0;
	int per = 0;
	while (a[0] > 0 || a[1] > 0 || a[2] > 0) {
		a[per % 3] -= 2;
		counter++;
		per++;
		if (!(a[0] > 0 || a[1] > 0 || a[2] > 0)) {
			cout << counter - 1 + 30;
			return 0;
		}
	}
	cout << counter + 30;
	return 0;
}