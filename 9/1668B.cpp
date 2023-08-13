#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];

		sort(a.begin(), a.end());

		long long int cnt = n;
		for (int i = 0; i < n; i++) {
			cnt += max(a[i], a[(i + 1) % n]);
		}

		cout << (cnt <= m ? "YES" : "NO") << '\n';
	}

	return 0;
}