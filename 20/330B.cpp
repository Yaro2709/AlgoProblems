#include<iostream>
#include<string.h>

using namespace std;

int mark[1010];

int main() {
	int n, m, i, j, k, u, v;
	cin >> n >> m;
	memset(mark, 0, sizeof(mark));
	for (i = 1; i <= m; i++)
	{
		cin >> u >> v;
		mark[u] = 1;
		mark[v] = 1;
	}
	for (i = 1; i <= n; i++)
	{
		if (mark[i] == 0)
			break;
	}
	cout << n - 1 << endl;
	for (j = 1; j <= n; j++)
	{
		if (i != j)
			cout << i << " " << j << endl;
	}
	return 0;
}