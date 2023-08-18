#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int k;
		cin >> k;
		long long int n = k;
		string s;
		cin >> s;
		long long int total = 0;
		vector<long long int> v;
		for (long long int i = 0; i < k; i++) {
			if (s[i] == 'L') {
				total += i;
				v.push_back((n - 1 - i) - i);
			}
			else {
				total += n - 1 - i;
				v.push_back((i)-(n - 1 - i));
			}
		}
		sort(v.begin(), v.end(), greater<int>());

		for (long long int i = 0; i < k; i++) {
			if (v[i] > 0) total += v[i];
			cout << total << " ";
		}
		cout << endl;

	}
	return 0;
}