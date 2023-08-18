#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, i, sum = 0;
        cin >> n;
        vector<ll>a(n);

        for (i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        ll s = 0;
        ll ans = 1;
        for (i = 0; i < n - 1; i++) {
            s += a[i];
            ans = max(ans, gcd(sum - s, s));
        }

        cout << ans << endl;
    }

    return 0;
}