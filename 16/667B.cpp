#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef long long int ll;

int main()
{
	ll n, i, j, a, l, sum;
	vector<ll> v;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	sum = 0;
	for (i = 0; i < v.size() - 1; i++)
	{
		sum += v[i];
	}

	cout << v[i] - sum + 1 << endl;

	return 0;
}