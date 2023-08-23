#include<iostream>

using namespace std;

int main() {

	long long n, num[21] = { 0 };
	cin >> n;
	long long tot = 0, tmp1;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		num[tmp + 10]++;
	}
	for (int i = 10; i > 0; i--) {
		tmp1 = (num[i + 10] * num[i + 10 - 2 * i]);
		tot += tmp1;
	}
	tmp1 = (num[10] * (num[10] - 1)) / 2;
	tot += tmp1;
	cout << tot;

	return 0;
}