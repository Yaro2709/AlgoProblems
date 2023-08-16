#include <iostream>

using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll *a = new ll[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll count = 1;
        ll cur = a[0];
        for (int i = 0; i < n; i++) {
            cur &= a[i];
            if (cur == 0) {
                if (i == n - 1)
                    break;
                count++;
                cur = a[i + 1];
            }
        }
        if (cur != 0)
            count--;
        cout << max(1ll, count) << endl;

        delete[] a;
    }

    return 0;
}