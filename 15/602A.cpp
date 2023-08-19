#include<iostream>

using namespace std;

int main() {
	int a, n, b, m;
	cin >> a >> n;
	long long ans1 = 0;
	for (int i = 1; i <= a; ++i) {
		int x;
		cin >> x;
		ans1 = ans1 * n + x;
	}
	cin >> b >> m;
	long long ans2 = 0;
	for (int i = 1; i <= b; ++i) {
		int x;
		cin >> x;
		ans2 = ans2 * m + x;
	}
	if (ans1 > ans2) {
		cout <<  ">";
	}
	else if (ans1 == ans2) {
		cout << "=";
	}
	else {
		cout << "<";
	}
	return 0;
}