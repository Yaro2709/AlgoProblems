#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[220] = { 0 };
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			arr[x]++;
		}
		int max, cnt = 1;
		for (int i = 1; i <= n + k; i++) {
			if (arr[i] != 0) {
				max = i;
			}
			else if (arr[i] == 0 && cnt <= k) {
				cnt++;
				max = i;
			}
			else {
				break;
			}
		}
		cout << max << endl;
	}

	return 0;
}