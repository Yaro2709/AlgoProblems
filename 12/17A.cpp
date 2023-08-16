#include <iostream>
#include <vector>

using namespace std;

bool s[1001];

void sieve() {
	for (int i = 2; i < 1001; i++) {
		if (s[i] == false) {
			for (int j = i + i; j < 1001; j += i) {
				s[j] = true;
			}
		}
	}
}

int main() {
	sieve();
	int n, k;
	cin >> n >> k;
	vector<int>p;
	for (int i = 2; i <= n; i++) {
		if (s[i] == false) {
			p.push_back(i);
		}
	}
	int cnt = 0;
	for (int i = 0; i < p.size() - 1; i++) {
		if (p[i] + p[i + 1] + 1 <= n && s[p[i] + p[i + 1] + 1] == false) {
			cnt++;
		}
	}
	if (cnt >= k) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}