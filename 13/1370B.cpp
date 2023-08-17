#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(2 * n + 1);
		for (int i = 1; i <= 2 * n; i++) cin >> a[i];
		vector<int> odd, even;
		for (int i = 1; i <= 2 * n; i++) {
			if (a[i] % 2 == 0) even.push_back(i);
			else odd.push_back(i);
		}

		int ie = 0;
		int io = 0;
		int count = 0;
		while (ie + 1 < even.size() && count < n - 1) {
			cout << even[ie] << " " << even[ie + 1] << endl;
			ie += 2;
			count++;
		}
		while (io + 1 < odd.size() && count < n - 1) {
			cout << odd[io] << " " << odd[io + 1] << endl;
			io += 2;
			count++;
		}
	}

	return 0;
}