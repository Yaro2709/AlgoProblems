#include<iostream>
#include<map>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* a = new int[n];
	int* b = new int[m];
	map<int, int> ma;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i], ma[b[i]]++;
	for (int i = 0; i < n; i++) if (ma[a[i]] > 0) cout << a[i] << " ";

	delete[] a;
	delete[] b;

	return 0;
}