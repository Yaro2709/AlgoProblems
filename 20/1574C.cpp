#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }
    sort(a.begin(), a.end());
    int m;
    cin >> m;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        ll res = LLONG_MAX;
        if (idx > 0)
            res = min(res, (x - a[idx - 1]) + max(0LL, y - tot + a[idx - 1]));
        if (idx < n)
            res = min(res, max(0LL, y - tot + a[idx]));
        cout << res << endl;
    }

    return 0;
}