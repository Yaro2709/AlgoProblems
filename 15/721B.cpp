#include<iostream>

using namespace std;

int sum[111];

int main()
{
	int n, k, i, j, len, tem;
	string s, ans;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		cin >> s;
		sum[s.length()]++;
	}
	cin >> ans;
	tem = 0;
	for (i = 1; i < ans.length(); i++) {
		tem += sum[i];
	}
	cout << tem + 1 + (tem / k) * 5 << " ";
	tem += sum[i] - 1;
	cout << tem + 1 + (tem / k) * 5 << endl;

	return 0;
}