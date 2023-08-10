#include<iostream>

using namespace std;

int main() {
    int n, m, s = 0, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x >> y;
            if (x == 1 || y == 1) {
                s++;
            }
        }
    }
    cout << s;

    return 0;
}