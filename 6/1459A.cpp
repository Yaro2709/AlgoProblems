#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string str; 
		string str2;
		cin >> str;
		cin >> str2;
		int count1 = 0;
		int count2 = 0;
		while (n--) {
			if (str[n] > str2[n]) {
				count1++;
			}
			else if (str[n] < str2[n]) {
				count2++;
			}
		}
		if (count1 > count2) {
			cout << "RED" << endl;
		}
		else if (count2 > count1) {
			cout << "BLUE" << endl;
		}
		else {
			cout << "EQUAL" << endl;
		}
	}
	return 0;
}