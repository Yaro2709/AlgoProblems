#include <iostream>

using namespace std;

int main() {
    int i, j, x, n, m;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> x;
            if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && x == 1) {
                cout << 2;
                return 0;
            }
        }
    }
    cout << 4;

    return 0;
}