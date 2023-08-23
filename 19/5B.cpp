#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	string str;
	int n, mx = 0, len;
	vector<string>v;

	while (getline(cin, str)) {
		len = str.size();
		mx = max(mx, len);
		v.push_back(str);
	}

	n = v.size();
	for (int i = 0; i < mx + 2; i++) {
		cout << "*";
	}
	cout << endl;
	int toggle = 0;
	for (int i = 0; i < n; i++) {
		int flag = v[i].size();
		flag = mx - flag;


		int x = flag / 2;
		int y = flag % 2 ? x + 1 : x;

		if (x != y) {
			toggle++;
		}

		if (toggle % 2 == 0)
			swap(x, y);

		cout << "*";
		for (int i = 0; i < x; i++)
			cout << " ";
		cout << v[i];
		for (int i = 0; i < y; i++)
			cout << " ";
		cout << "*" << endl;

	}

	for (int i = 0; i < mx + 2; i++) {
		cout << "*";
	}
	cout << endl;

	return 0;
}