#include<iostream>

using namespace std;

int main() {
    int n, m, x, y, count = 0;
    cin >> n >> m >> x >> y;
    for (int i = n; i >= 1; i--) {

        for (int j = m; j >= 1; j--) {
            cout << x << " " << y << endl;
            count++;
            if (j > 1) {
                y++;
            }
            if (y == m + 1) {
                y = 1;
            }

        }
        x++;
        if (x == n + 1) {
            x = 1;
        }
    }

    return 0;
}