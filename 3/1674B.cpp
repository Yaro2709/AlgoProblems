#include <iostream>

using namespace std;

void solved() {
	string word; 
	cin >> word;
	int a = int(word[0]) % 32;
	int b = int(word[1]) % 32;
	if (a == 1)		cout << b - 1 << endl;
	else if (b < a) cout << (a - 1) * 25 + b << endl;
	else			cout << (a - 1) * 25 + (b - 1) << endl;
}

int main() {
	int t; 
	cin >> t;
	while (t--) {
		solved();
	}

	return 0;
}