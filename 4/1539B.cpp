#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;

	vector<int> len(n + 1);
	for (int i = 0; i < n; i++) {
		len[i + 1] = len[i] + s[i] - 'a' + 1;
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << len[r] - len[l - 1] << endl;
	}

	return 0;
}