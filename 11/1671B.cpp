#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, temp;
        cin >> n;
        cin >> x;

        for (int i = 1; i < n; i++) {
            cin >> y;
        }
        if (n == 1) { cout << "YES" << endl; continue; }
        if ((y - x + 1 - n) > 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}