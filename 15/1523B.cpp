#include<iostream>
#include<vector>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int& ele : v)
		cin >> ele;
	cout << n * 3 << "\n";
	for (int i = 1; i <= n; i += 2)
	{
		cout << 1 << " " << i << " " << i + 1 << "\n";
		cout << 2 << " " << i << " " << i + 1 << "\n";
		cout << 1 << " " << i << " " << i + 1 << "\n";
		cout << 2 << " " << i << " " << i + 1 << "\n";
		cout << 1 << " " << i << " " << i + 1 << "\n";
		cout << 2 << " " << i << " " << i + 1 << "\n";
	}

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}