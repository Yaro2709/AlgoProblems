#include<iostream>

using namespace std;

#define ll long long int

int main() {
    ll n, i, u, v, s2 = 0, p, s = 0, s1 = 0, ma = 0; cin >> n >> p;
    ll *a = new ll[n];
    for (i = 0; i < n; i++) cin >> a[i], s += a[i];
    for (i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 = s - s1;
        ma = max((s1 + p) % p + (s2 + p) % p, ma);
    }
    cout << ma;

    delete[] a;

    return 0;
}