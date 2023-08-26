#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

signed main()
{
    int long long test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n); for (auto& i : v)cin >> i;
        vector<ll>pos(n + 1);
        for (ll i = 0; i < n; i++)
        {
            pos[v[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << min(pos[i] + 2, n) << " ";
        }
        cout << endl;
    }
    return 0;
}