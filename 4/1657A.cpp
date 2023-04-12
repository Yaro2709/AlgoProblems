#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int v = sqrt(x * x + y * y);
        if (x == 0 && y == 0) {
            cout << 0 << endl;
        }
        else if (v * v == (x * x + y * y)) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}