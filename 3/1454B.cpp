#include<iostream>
#include <algorithm>

using namespace std;

void solve() 
{
	int n;
	cin >> n;
	
	int* a = new int[n + 1];
	int* b = new int[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	sort(a + 1, a + n + 1);

	int sum = -1;
	for (int i = 1; i <= n; i++) {
		if (a[i] != a[i + 1] && a[i] != a[i - 1]) {
			sum = a[i];
			break;
		}
	}
	if (sum == -1) { 
		cout << sum << endl; 
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (b[i] == sum) {
				cout << i << endl;
			}
		}
	}
}

int main() 
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}