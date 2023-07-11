#include <iostream>
#include <math.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2) {
        cout << "-1 -1" << endl;
        return;
    }
    else {
        int k = (a + b) / 2;
        int f = min(k, a);
        cout << a - f << " " << b - (k - f) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}