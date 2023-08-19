#include<iostream>

using namespace std;

using ll = long long;
ll N, M;

void solve() {
    ll n = N; ll m = M;
    while ((2 * m <= n || 2 * n <= m) && n != 0 && m != 0) {
        if (2 * m <= n) {
            ll k = n / (2 * m); n -= 2 * m * k;
        }
        else {
            ll k = m / (2 * n); m -= 2 * n * k;
        }
    }
    cout << n << " " << m << endl;
}
int main() {
    cin >> N >> M;
    solve();
    return 0;
}