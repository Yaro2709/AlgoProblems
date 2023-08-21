#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1] || b[j] > b[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                v.push_back({ j + 1,j + 2 });
            }
        }
    }
    if (is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end()))
    {
        cout << v.size() << endl;

        for (auto [i, j] : v) {
            cout << i << " " << j << endl;
        }
    }

    else
    {
        cout << "-1" << endl;
        return;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}