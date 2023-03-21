#include <iostream>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	string name;
	cin >> name;
	
	int t = 0;
	int delete_sub = 0;
	for (int i = 0; i < n; i++) {
		if (name[i] == 'x') {
			t += 1;
		}
		else if (name[i] != 'x') {
			t = 0;
		}
		if (t == 3) {
			delete_sub += 1;
		}
		else if (t > 3) {
			delete_sub += 1;
		}
	}

	cout << delete_sub << endl;

	return 0;
}