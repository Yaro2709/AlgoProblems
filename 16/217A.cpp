#include<iostream>

using namespace std;

int x[105], y[105];
bool vis[105];
int n;

void dfs(int u) {
	vis[u] = true;
	for (int i = 0; i < n; i++) {
		if (!vis[i] and (x[i] == x[u] or y[i] == y[u])) {
			dfs(i);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			ans++;
			dfs(i);
		}
	}
	cout << ans - 1 << '\n';

	return 0;
}