#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	string s;
	cin >> s;

	int flag = 0;
	vector<string> str(5);
	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		if (str[i][0] == s[0] || str[i][1] == s[1]) {
			flag = 1;
		}
	}

	if (flag) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}