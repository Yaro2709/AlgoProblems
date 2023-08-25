#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main()
{
    ll n, k; 
    cin >> n >> k;
    ll *p = new ll[n];
    ll a = n - k + 1, b = k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] >= a) v.push_back(i);
    }
    if (k & 1) a = (a + n) / 2;
    else { b = b / 2; a = a + n; }
    ll sum = a * b;
    ll res = 1;
    ll m = 998244353;

    for (int i = 0; i < v.size() - 1; i++)
    {
        res = (res * (v[i + 1] - v[i])) % m;
    }
    cout << sum << " " << res << endl;

    delete[] p;

    return 0;
}