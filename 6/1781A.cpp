#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, d, h, a, b, f, g;
        cin >> w >> d >> h;
        cin >> a >> b >> f >> g;
        int t1 = min(b + g + abs(a - f), (2 * d - b - g + abs(a - f)));
        int t2 = min(a + f + abs(b - g), (2 * w - a - f + abs(b - g)));
        cout << min(t1, t2) + h << endl;
    }

    return 0;
}