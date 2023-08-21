#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long int

int main()
{
	int n;
	cin >> n;
	vector <long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	long long sum = 0;
	for (int i = 0, j = 1; i < n && j <= n; i++, j++)
	{
		sum += abs(a[i] - j);
	}
	cout << sum << endl;
	
	return 0;
}