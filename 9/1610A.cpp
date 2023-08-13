#include <iostream>

using namespace std;

int main() {
    int t, n, m, x, i;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> m;
        if (n == 1 && m == 1) {
            cout << 0 << endl;
        }
        else if (min(n, m) == 1)
        {
            cout << "1\n";
        }
        else {
            cout << 2 << endl;
        }
    }
    return 0;
}