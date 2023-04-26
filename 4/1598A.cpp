#include <iostream>

using namespace std;

const int N = 4e5 + 5;
char a[2][N];

void solve() 
{
	int n; 
	cin >> n;
	for (int j = 0; j < 2; ++j) {
		for (int i = 1; i <= n; ++i) {
			cin >> a[j][i];
		}
	}

	for (int i = 2; i <= n; ++i) {
		if (a[1][i] == '1' && a[0][i] == '1') {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main() 
{
	int t; 
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}