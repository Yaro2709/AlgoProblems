#include<iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;
	int prev = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x - prev > 15) {
			cout << prev + 15;
			return 0;
		}
		prev = x;
	}
	if (90 - prev > 15) {
		cout << prev + 15;
		return 0;
	}
	cout << 90;

	return 0;
}