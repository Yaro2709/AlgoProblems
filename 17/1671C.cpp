#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        ll *a = new ll[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a, a + n + 1);
        for (int i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
        ll ans = 0;
        for (int i = n; i > 0; --i) {
            if (a[i] > x) continue;

            ans += 1 + (x - a[i]) / i;
        }

        cout << ans << '\n';

        delete[] a;
    }

    return 0;
}