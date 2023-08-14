#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	string s;
	cin >> n >> m;
	cin >> s;
	sort(s.begin(), s.end());
	int result = 0, q = 0;
	char last;
	for (int i = 0; i < n; i++) {
		if (q == m) break;
		if (i == 0) {
			result += s[i] - 'a' + 1;
			last = s[i];
			q++;
		}
		else if (s[i] - last >= 2) {
			result += s[i] - 'a' + 1;
			last = s[i];
			q++;
		}
	}
	if (q == m) {
		cout << result;
	}
	else {
		cout << -1;
	}

	return 0;
}