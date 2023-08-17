#include<iostream>

using namespace std;

const int N = 105;
int s[N], r[N], h[N], p[N];

int main() 
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> r[i] >> h[i] >> p[i];
	}
	int result = -1;
	for (int i = 1; i <= n; i++) {
		bool outdated = false;
		for (int j = 1; j <= n; j++) {
			if (s[j] > s[i] && r[j] > r[i] && h[j] > h[i]) outdated = true;
		}
		if (!outdated) {
			if (result == -1) result = i;
			if (p[result] > p[i]) result = i;
		}
	}
	cout << result << endl;

	return 0;
}