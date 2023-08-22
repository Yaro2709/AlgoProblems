#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int temp = n - k;
	for (int i = 1; i <= n - k; i++) {
		cout << i << " ";
	}
	bool move = true;
	for (int i = k; i > 0; i--) {
		if (move) {
			cout << temp + i << " ";
			temp += i;
			move = false;
		}
		else {
			cout << temp - i << " ";
			temp -= i;
			move = true;
		}
	}
	return 0;
}