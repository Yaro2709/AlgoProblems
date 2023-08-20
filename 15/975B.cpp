#include<iostream>

using namespace std;

long long int a[15], b[15], c[15], ans = 0;

int main() {

	for (int i = 1; i <= 14; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			b[j] = a[j];
		}
		long long int h = b[i], faz = h % 14, pos = i + 1, cc = 0;
		b[i] = 0;
		for (int j = 1; j <= 14; j++)
			c[j] = h / 14;
		while (faz--) {
			if (pos == 15)
				pos = 1;
			c[pos]++;
			pos++;
		}
		for (int j = 1; j <= 14; j++) {
			if ((b[j] + c[j]) % 2 == 0)
				cc += (b[j] + c[j]);
		}
		ans = max(ans, cc);
	}
	cout << ans;

	return 0;
}