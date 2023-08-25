#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, m;
        cin >> n >> x >> m;
        int l = x, r = x;
        while (m--) {
            int a, b;
            cin >> a >> b;
            if (b < l || a > r) continue;
            l = min(l, a);
            r = max(r, b);
        }
        cout << r - l + 1 << "\n";
    }
    return 0;
}