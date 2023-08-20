#include<iostream>
#include <vector>

using namespace std;

int main() {
	int r, c, n, k;
	cin >> r >> c >> n >> k;
	vector<vector<int> > v(r + 1, vector<int>(c + 1, 0));
	while (n--) {
		int x, y; cin >> x >> y;
		v[x][y] = 1;
	}
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
		}
	}

	int ans = 0;
	for (int bi = 1; bi <= r; bi++) {
		for (int ei = bi; ei <= r; ei++) {
			for (int bj = 1; bj <= c; bj++) {
				for (int ej = bj; ej <= c; ej++) {
					if (v[ei][ej] - v[ei][bj - 1] - v[bi - 1][ej] + v[bi - 1][bj - 1] >= k) {
						ans++;
					}
				}
			}
		}
	}
	cout << ans;

	return 0;
}