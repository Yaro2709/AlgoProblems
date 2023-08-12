#include <iostream>

using namespace std;

int main() {
	string num;
	while (cin >> num) {
		for (int i = 0; i < num.length(); ++i) {
			if (num[i] == '.') {
				if (num[i - 1] == '9') {
					cout << "GOTO Vasilisa." << '\n';
					break;
				}
				else {
					if (num[i + 1] >= '5')
						num[i - 1] += 1;
					string n = num.substr(0, i);
					cout << n << '\n';
					break;
				}
			}
		}
	}
	return 0;
}