#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n /= 2;
	char c = getchar();
	int sum = 0;
	for (int i = 0; (c = getchar()) == '7' || c == '4'; i++) {
		if (i < n) {
			sum += c;
		}
		else {
			sum -= c;
		}
	}
	if (!(c == '7' || c == '4' || c == '\n') || sum != 0) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}

	return 0;
}