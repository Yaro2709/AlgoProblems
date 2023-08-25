#include<iostream>
#include<vector>

using namespace std;

void tmain() {
	int n;
	string s; cin >> s;
	n = s.size();
	int c = 0;
	vector<int>a(300);
	for (int i = 0; i < n; i++) {
		a[s[i]]++;
		if (a[s[i]] == 2) {
			c++;
			a[s[i]] --; a[s[i]]--;
			a.assign(300, 0);
		}
	}
	cout << n - 2 * c << "\n";
}

int main() {
	int t; cin >> t;
	while (t--) tmain();

	return 0;
}