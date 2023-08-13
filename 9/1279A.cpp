#include<iostream>

using namespace std;

void solve() {
	int r, g, b; 
	cin >> r >> g >> b;
	if ((g + b + 1) < r || (r + b + 1) < g || (g + r + 1) < b)cout << "No\n";
	else cout << "Yes\n";
}

int main() {
	int q;
	cin >> q;
	while (q--) solve();

	return 0;
}