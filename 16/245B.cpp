#include<iostream>

using namespace std;

int main() {
	string input;
	cin >> input;
	string ans = "";
	int i;
	if (input[0] == 'f') {
		ans = "ftp://";
		i = 3;
	}
	else {
		ans = "http://";
		i = 4;
	}
	ans = ans + input[i++];
	for (; i < input.size(); i++) {
		if (input[i] == 'r' && input[i + 1] == 'u' && i + 2 == input.size()) {
			ans = ans + ".ru";
			break;
		}
		else if (input[i] == 'r' && input[i + 1] == 'u' && i + 2 != input.size()) {
			ans = ans + ".ru/";
			ans = ans + input.substr(i + 2, input.size() - i - 2);
			break;
		}
		else {
			ans = ans + input[i];
		}
	}
	cout << ans;

	return 0;
}