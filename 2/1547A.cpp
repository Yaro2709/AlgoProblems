#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int x1, x2, x3, y1, y2, y3;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int ans = abs(x1 - x2) + abs(y1 - y2);
        if (x1 == x2 || y1 == y2) {
            if (x1 == x2 && x1 == x3) {
                if ((y1<y3 && y2>y3) || (y1 > y3 && y2 < y3)) {
                    ans += 2;
                }
            }
            else if (y1 == y2 && y1 == y3) {
                if ((x1<x3 && x2>x3) || (x1 > x3 && x2 < x3)) {
                    ans += 2;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}