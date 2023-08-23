#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

#define ll long long int 
#define lp(x,y) for(ll i=x;i<y;i++)

int main()
{
	int d[5001];
	memset(d, 0, sizeof(d));
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	int *arr = new int[2 * n];
	vector<pair<int, int > > v;
	lp(0, 2 * n)
	{
		cin >> arr[i];
		d[arr[i]]++;
		v.push_back({ arr[i],i + 1 });
	}
	lp(0, 5001)
	{
		if (d[i] % 2 != 0)
		{
			cout << "-1";
			return 0;
		}

	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 2 * n; i += 2)
	{
		cout << v[i].second << ' ' << v[i + 1].second << '\n';
	}

	delete[] arr;

	return 0;
}