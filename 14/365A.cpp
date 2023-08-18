#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int z = 0;
		for (int j = 0; j <= k; j++) {
			if (str.find('0' + j) != -1)
				z++;
		}
		if (z == k + 1)
			count++;
	}
	cout << count << endl;

	return 0;
}