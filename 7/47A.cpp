#include<iostream>

using namespace std;

int main() {

	int n, x; 
	cin >> n;
	x = sqrt(2 * n);

	if (x * (x + 1) == 2 * n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}