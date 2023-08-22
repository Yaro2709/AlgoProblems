#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	string res;
	int open = 0;
	for (int i = 0; i < str.size(); i++) {
		if (res.size() + open == k)
			break;
		if (str[i] == '(')
			open++;
		else
			open--;
		res.push_back(str[i]);
	}

	while (open > 0) {
		res.push_back(')');
		open--;
	}

	cout << res << endl;

	return 0;
}