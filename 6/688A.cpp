#include<iostream>

using namespace std;

int main() {
	int n, b;
	cin >> n >> b;
	string a;
	int ans = 0, mx = 0;
	for (int i = 0; i < b; i++) {
		cin >> a;
		if (count(a.begin(), a.end(), '0')) {
			mx++;
		}
		else mx = 0;
		ans = max(ans, mx);
	}
	cout << ans << endl;
	return 0;
}