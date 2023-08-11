#include<iostream>

using namespace std;

int main() {
	int w, h, k; cin >> w >> h >> k;
	cout << 2 * (w + h + 2 - 4 * k) * k;

	return 0;
}