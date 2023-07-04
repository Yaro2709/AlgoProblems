#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		sort(s.begin(), s.end());

		bool flag = 0;
		for (int j = 1; j < s.length(); j++)
		{
			if (s[j] != s[j - 1] + 1)
				flag = 1;
		}

		if (flag == 1) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}

	return 0;
}