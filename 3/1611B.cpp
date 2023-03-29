#include <iostream>

using namespace std;

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        int b;
        cin >> b;

        int f_min = min(a, b);
        int c = min(f_min, (a + b) / 4);
        cout << c << endl;
    }
    return 0;
}