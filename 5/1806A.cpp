#include <iostream>

using namespace std;

void solve()
{
    int x, y, c, d;
    cin >> x >> y >> c >> d;
    if (d < y || (x + d - y) < c) { cout << -1 << endl; return; }
    cout << abs(d - y) + abs(c - (x + d - y)) << endl;
}

int main() {

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}