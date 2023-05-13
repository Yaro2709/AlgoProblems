#include <iostream>

using namespace std;

void solve() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int x;
    if (e >= c) x = e - c;
    else        x = a - c + a - e;

    int y;
    if (f >= d) y = f - d;
    else        y = b - d + b - f;

    int ans = min(x, y);

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}