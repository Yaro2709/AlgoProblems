#include <iostream>

using namespace std;

int num[1000010], a[200010];

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k, d;
		cin >> n >> k >> d;
		for (int i = 1; i <= n; i++) cin >> a[i];
		int maxv = INT_MAX, cnt = 0;
		for (int i = 1; i <= n; i++) {
			num[a[i]]++;
			if (num[a[i]] == 1) cnt++;
			if (i > d) {
				num[a[i - d]]--;
				if (num[a[i - d]] == 0) cnt--;
			}
			if (i >= d) maxv = min(maxv, cnt);
		}
		for (int i = 1; i <= n; i++) num[a[i]] = 0;
		cout << maxv << endl;
	}
	return 0;
}