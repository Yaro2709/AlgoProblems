#include<iostream>

using namespace std;

int main() {
	int ans = 0;
	string s;
	cin >> s;
	for (auto i : s) {
		if (i <= '9') {
			if (((i - '0') % 2))ans++;
		}
		else {
			if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')ans++;
		}
	}
	cout << ans << "\n";

	return 0;
}