#include<iostream>
#include<algorithm>

using namespace std;

int a;
char c;
int arr[5];

int main() {
	for (int i = 1; i <= 3; i++) {
		cin >> a >> c;
		if (c == 'm') {
			arr[i] = a;
		}
		else if (c == 'p') {
			arr[i] = a + 11;
		}
		else {
			arr[i] = a + 22;
		}
	}
	sort(arr + 1, arr + 4);
	if (arr[1] == arr[3]) {
		cout << 0 << '\n';
	}
	else if (arr[1] == arr[2]) {
		cout << 1 << '\n';
	}
	else if (arr[2] == arr[3]) {
		cout << 1 << '\n';
	}
	else if (arr[1] + 2 == arr[3]) {
		cout << 0 << '\n';
	}
	else if (arr[1] + 1 == arr[2]) {
		cout << 1 << '\n';
	}
	else if (arr[2] + 1 == arr[3]) {
		cout << 1 << '\n';
	}
	else if (arr[1] + 2 == arr[2]) {
		cout << 1 << '\n';
	}
	else if (arr[2] + 2 == arr[3]) {
		cout << 1 << '\n';
	}
	else cout << 2 << '\n';

	return 0;
}