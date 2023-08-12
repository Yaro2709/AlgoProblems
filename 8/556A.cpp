#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (auto xx : s) {
		if (xx == '1') a++;
		else b++;
	}
	cout << s.size() - (2 * min(a, b)) << endl;

	return 0;
}