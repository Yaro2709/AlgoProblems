#include<iostream>

using namespace std;

const int N = 2 * 1000 * 100;
long long n, num[N], m;

int main() {
	cin >> n;
	while (n--) {
		bool flag = true;
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> num[i];
		for (int i = 1; i < m && flag; i++)
			if (abs(num[i - 1] - num[i]) > 1)
				flag = false, cout << "YES\n" << i << ' ' << i + 1 << endl;
		if (flag)
			cout << "NO\n";
	}
	return cout << endl, 0;
}