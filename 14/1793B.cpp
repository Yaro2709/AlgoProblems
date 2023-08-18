#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int i, j;
        cout << (x - y) * 2 << endl;
        for (i = x; i >= y; i--) {
            cout << i << " ";
        }
        for (i = y + 1; i < x; i++) {
            cout << i << " ";
        }
        cout << endl;

    }
    return 0;
}