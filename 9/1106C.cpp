#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long 

int main() {
    ll n; cin >> n;
    ll *a = new ll[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n / 2; i++) {
        ans += (a[i] + a[n - i - 1]) * (a[i] + a[n - i - 1]);
    }
    cout << ans;

    delete[] a;

    return 0;
}