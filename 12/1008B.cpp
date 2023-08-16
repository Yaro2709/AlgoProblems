#include <iostream>

using namespace std;

int main() {
    int n, x, y, a = 1e9;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < y) {
            swap(x, y);
        }
        if (x > a && y > a) {
            cout << "NO";
            return 0;
        }
        if (x <= a) {
            a = x;
        }
        else {
            a = y;
        }
    }
    cout << "YES";

    return 0;
}