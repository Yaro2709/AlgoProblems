#include<iostream>
#include<algorithm>

using namespace std;

int a[6];

int main() {
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	sort(a, a + 6);
	if ((a[1] == a[4] && a[0] != a[5]) || (a[0] == a[3] && a[4] != a[5]) || (a[2] == a[5] && a[0] != a[1])) {
		cout << "Bear\n";
	}
	else if ((a[0] == a[3] && a[4] == a[5]) || (a[2] == a[5] && a[0] == a[1])) {
		cout << "Elephant\n";
	}
	else {
		cout << "Alien\n";
	}
	return 0;
}