#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;
	
	string* sits = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> sits[i];
	}

	bool canSit = false;
	for (int i = 0; i < n; i++) {
		if (sits[i][0] == 'O' and sits[i][1] == 'O') {
			canSit = true;
			sits[i][0] = sits[i][1] = '+';
			break;
		}
		else if (sits[i][3] == 'O' and sits[i][4] == 'O') {
			canSit = true;
			sits[i][3] = sits[i][4] = '+';
			break;
		}
	}

	if (canSit) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			cout << sits[i] << endl;
		}
	}
	else {
		cout << "NO" << endl;
	}

	delete[] sits;

	return 0;
}