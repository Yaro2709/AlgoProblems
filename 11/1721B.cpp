#include <iostream>

using namespace std;

#define ll long long int

ll T;
ll n, m;
ll sx, sy, d;
ll vis[1010][1010];

int main() {
	cin >> T;
	while (T--)
	{
		cin >> n >> m >> sx >> sy >> d;
		if ((sx + d >= n || sy - d <= 1) && (sx - d <= 1 || sy + d >= m)) {
			cout << -1 << endl;
			continue;
		}
		else cout << n + m - 2 << endl;
	}
	return 0;
}