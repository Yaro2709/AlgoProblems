#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

int main() {
    ll t;
    cin >> t;
    ll* a = new ll[t];
    ll m = 0, n = 0;
    for (ll i = 0; i < t; i++) {
        cin >> a[i];
        n += a[i];
    }
    sort(a, a + t);
    t = t / 2;
    for (ll i = 0; i < t; i++)
        m += a[i];
    n = n - m;
    cout << (n * n) + (m * m);

    delete[] a;

    return 0;
}