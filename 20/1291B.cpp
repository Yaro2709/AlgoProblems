#include<iostream>
#include<vector>

using namespace std;

using ll = long long;

int main() {
	int T; 
	cin >> T;
	while (T--) {
		int n; 
		cin >> n;
		vector<int>vec(n);
		for (int i = 0; i < n; i++)cin >> vec[i];
		bool happy = true;
		for (int i = 0; i < n; i++) {
			int val = min(i, n - 1 - i);
			if (vec[i] < val)happy = false;
		}
		if (n % 2 == 0) {
			int val = n / 2 - 1;
			if (vec[n / 2] == vec[n / 2 - 1] && vec[n / 2] == val)
				happy = false;
		}
		if (happy)cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}