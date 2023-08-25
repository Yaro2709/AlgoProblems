#include<iostream>

using namespace std;

int num[10];
int arr[500009];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 4) arr[i] = 1;
		if (arr[i] == 8) arr[i] = 2;
		if (arr[i] == 15) arr[i] = 3;
		if (arr[i] == 16) arr[i] = 4;
		if (arr[i] == 23) arr[i] = 5;
		if (arr[i] == 42) arr[i] = 6;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) { num[1]++; continue; }
		if (num[arr[i] - 1] > num[arr[i]]) num[arr[i]]++;
	}
	cout << n - num[6] * 6 << endl;

	return 0;
}
