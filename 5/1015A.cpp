#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m;
	int arr[101] = { 0 };
	while (n--) {
		cin >> a >> b;

		for (int i = a; i <= b; i++) {
			arr[i] = 1;
		}
	}

	int count = 0;
	for (int j = 1; j <= m; j++) {
		if (arr[j] == 0) {
			count++;
		}
	}

	cout << count << endl;
	for (int j = 1; j <= m; j++) {
		if (arr[j] == 0) {
			cout << j << " ";
		}
	}
	cout << endl;

	return 0;
}