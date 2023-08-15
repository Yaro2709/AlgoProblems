#include <iostream>

using namespace std;

const int MN = 2e5;
int inp[MN + 3], pos[MN + 3], res[MN + 3];

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> inp[i];
			pos[inp[i]] = i;
		}
		string likes; cin >> likes;
		int left = 1, right = 1;
		for (int i = 0; i < likes.size(); i++) {
			if (likes[i] == '0') {
				right++;
			}
		}
		for (int i = 1; i <= n; i++) {
			if (likes[pos[i] - 1] == '0') {
				res[pos[i]] = left++;
			}
			else {
				res[pos[i]] = right++;
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << res[i] << " ";
			inp[i] = 0;
			pos[i] = 0;
			res[i] = 0;
		}
		cout << "\n";
	}

	return 0;
}