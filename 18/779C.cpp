#include<iostream>
#include<algorithm>

using namespace std;

#define MAXN 200005
#define ll long long int
int a[MAXN], b[MAXN], c[MAXN];

int main()
{
	int n, k;
	while (cin >> n >> k)
	{
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) { cin >> b[i]; c[i] = a[i] - b[i]; sum += b[i]; }
		sort(c, c + n);
		for (int i = 0; i < k; i++)
			sum += c[i];
		for (int i = k; i < n; i++)
			if (c[i] < 0)sum += c[i];
		cout << sum << endl;
	}
	return 0;
}