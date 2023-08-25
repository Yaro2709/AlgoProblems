#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m, prev = -1;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	int i = 0, j = a.size() - 1, count = 0;
	string s = "";
	while (i != j) {
		m = min(a[i], a[j]);
		if (m > prev) {
			if (a[i] == m) {
				s += "L";
				prev = a[i];
				i++;
			}
			else {
				s += "R";
				prev = a[j];
				j--;
			}
			count++;
		}
		else if (a[i] > prev || a[j] > prev) {
			if (a[i] != m) {
				s += "L";
				prev = a[i];
				i++;
			}
			else {
				s += "R";
				prev = a[j];
				j--;
			}
			count++;
		}
		else
			break;
	}
	if (i == j && a[i] > prev) {
		s += "L";
		count++;
	}
	cout << count << endl;
	cout << s << endl;

	return 0;
}