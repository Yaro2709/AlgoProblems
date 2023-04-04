#include <iostream>
#include <vector>

using namespace std;

void solve() 
{
	int n;
	cin >> n;

	vector<int> v1(n);
	vector<int> v2(n);
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> v2[i];
	}
	cout << v2[0] - v1[0] << " ";

	for (int i = 1; i < n; i++) {
		if (v1[i] >= v2[i - 1]) {
			cout << v2[i] - v1[i] << " ";
		}
		else {
			cout << v2[i] - v2[i - 1] << " ";
		}
	}
	cout << endl;
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