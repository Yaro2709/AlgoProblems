#include <iostream>

using namespace std;

int l[100], t, e;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i != a; i++) {
		cin >> l[i];
		t += l[i];
	}
	for (int i = 0; i != a; i++) {
		if ((t - l[i]) % 2 == 0)
			e += 1;
	}
	cout << e;

	return 0;
}