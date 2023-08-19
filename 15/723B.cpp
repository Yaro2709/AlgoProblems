#include<iostream>

using namespace std;

char str[200007];

int main() {
	int n, open, res, cnt, temp = 0, i;
	cin >> n;
	cin >> str;
	open = 0;
	res = 0;
	cnt = 0;

	for (i = 0; i < n; i++) {
		if (str[i] == '(') {
			open = 1;
			if (temp > 0)
				res = max(res, temp);
			temp = 0;
		}
		else if (str[i] == ')') {
			if (temp > 0)
				cnt++;
			open = 0;
			temp = 0;
		}
		else if (str[i] == '_') {
			if (temp > 0 && open == 0)
				res = max(res, temp);
			else if (temp > 0)
				cnt++;
			temp = 0;
		}
		else temp++;

	}

	if (temp > 0)
		res = max(res, temp);

	cout << res << " " << cnt << "\n";
	return 0;
}