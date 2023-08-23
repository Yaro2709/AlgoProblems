#include<iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.size() - 1;
	string dec = "00";
	int t;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') {
			if ((i + 1) < s.size())
				dec[0] = s[i + 1];

			if ((i + 2) < s.size())
				dec[1] = s[i + 2];
			l = i - 1;
			break;
		}

	}
	if (s[0] == '-')
		t = 1;
	else
		t = 0;

	string d = "";


	int count = 0;
	for (int i = l; i >= t; i--) {

		if (count == 3) {

			d = d + ",";
			d = d + s[i];
			count = 1;
		}
		else {

			d = d + s[i];
			count++;
		}
	}

	if (t == 1)
		d = d + "$" + "(";
	else
		d = d + "$";

	for (int i = d.size() - 1; i >= 0; i--)
		cout << d[i];
	cout << ".";
	if (t == 0)
		cout << dec << endl;
	else
		cout << dec << ")" << endl;

	return  0;

}