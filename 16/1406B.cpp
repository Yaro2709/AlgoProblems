#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll *a = new ll[n + 1];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll p1 = 1;
        for (ll i = 0; i < 2; i++) {
            p1 *= a[i];
        }
        for (ll i = (n - 3); i <= n - 1; i++) {
            p1 *= a[i];
        }

        ll p2 = 1;
        for (ll i = 0; i < 4; i++) {
            p2 *= a[i];
        }
        p2 *= a[n - 1];

        ll p3 = 1;
        for (ll i = n - 5; i <= n - 1; i++) {
            p3 *= a[i];
        }

        ll ans = max({ p1,p2,p3 });
        cout << ans << endl;

        delete[] a;
    }

    return 0;
}