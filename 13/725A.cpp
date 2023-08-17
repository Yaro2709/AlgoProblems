#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int bal = 0, ans = 0;
	int l = 0, r = n - 1;
	while (s[l] == '<')
		l++;
	while (s[r] == '>')
		r--;
	ans += l + (n - r - 1);
	cout << ans << "\n";

	return 0;
}