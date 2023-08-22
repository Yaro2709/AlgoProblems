#include <iostream>

using namespace std;

typedef long long ll;

ll a[100], b[100];
ll c[100][100];

int main() {
    ll n, m, h;
    cin >> n >> m >> h;
    for (ll i = 0; i < m; ++i) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cin >> c[i][j];
        }
    }
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            cout << c[i][j] * min(a[j], b[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}