#include<iostream>

using namespace std;

long long arr[13][13];

int main() {
	int q, n;
	long long o;
	string s;
	cin >> q;
	while (q--) {
		cin >> n;
		o = 0;
		for (int i = 0; i < 13; i++) for (int j = 0; j < 13; j++) arr[i][j] = 0;
		for (int i = 0; i < n; i++) {
			cin >> s;
			arr[s[0] - 'a'][s[1] - 'a']++;
		}
		for (int i = 0; i < 13; i++) {
			for (int j = 0; j < 13; j++) {
				for (int k = 0; k < 13; k++) {
					if (k != j) o += arr[i][j] * arr[i][k];
					if (k != i) o += arr[i][j] * arr[k][j];
				}
			}
		}
		cout << o / 2 << "\n";
	}
	return 0;
}