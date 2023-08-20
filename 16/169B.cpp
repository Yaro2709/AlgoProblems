#include<iostream>
#include <algorithm>

using namespace std;

int a[10000010], b[10000010];

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); ++i) a[i + 1] = s1[i] - '0';
	for (int i = 0; i < s2.size(); ++i) b[i + 1] = s2[i] - '0';
	sort(b + 1, b + s2.size() + 1);
	int p = s2.size();
	for (int i = 1; i <= s1.size(); ++i)
		for (int j = p; j >= 1; --j)
			if (a[i] < b[j]) {
				a[i] = b[j];
				p = j - 1;
				break;
			}
			else break;
	for (int i = 1; i <= s1.size(); ++i) cout << a[i];

	return 0;
}