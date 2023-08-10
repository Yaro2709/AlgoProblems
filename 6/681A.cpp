#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	int a, b;
	string set = "NO";
	while (n--) {
		cin >> s >> a >> b;
		if (a >= 2400 && b > a) {
			set = "YES";
		}
	}
	cout << set;

	return 0;
}