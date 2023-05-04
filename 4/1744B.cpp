#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll n, q;
        cin >> n >> q;

        ll sum = 0;
        ll even = 0, odd = 0;

        for (int j = 0; j < n; j++) {
            ll a;
            cin >> a;

            sum += a;
            if (a % 2)  odd++;
            else        even++;
        }

        for (int j = 0; j < q; j++) {
            ll a, b;
            cin >> a >> b;

            if (a) {
                sum += odd * b;
                if (b % 2) even += odd, odd = 0;
            }
            else {
                sum += even * b;
                if (b % 2) odd += even, even = 0;
            }

            cout << sum << endl;
        }
    }

    return 0;
}