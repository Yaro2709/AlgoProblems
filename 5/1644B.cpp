#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() 
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	sort(a.begin(), a.end());

	int j = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			cout << a[j] << " ";
		}

		if (i != n - 1) {
			swap(a[j], a[j + 1]);
			j++;
		}

		cout << endl;
	}
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