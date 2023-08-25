#include<iostream>

using namespace std;

#define llong long long int

llong n;
llong ans = LLONG_MAX;

void dfs(llong sum, llong cnt4, llong cnt7) {
	if (sum >= n && (cnt4 == cnt7))
		ans = min(ans, sum);

	if (sum > n * 100) return;

	dfs(sum * 10 + 4, cnt4 + 1, cnt7);
	dfs(sum * 10 + 7, cnt4, cnt7 + 1);

	return;
}

int main() {
	cin >> n;
	dfs(0, 0, 0);
	cout << ans << "\n";

	return 0;
}