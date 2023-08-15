#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m % n != 0) {
        cout << -1;
    }
    else {
        int cnt = 0, k = m / n;
        while (k % 2 == 0 && k != 0) {
            k /= 2; cnt++;
        }
        while (k % 3 == 0 && k != 0) {
            k /= 3; cnt++;
        }
        if (k != 1) cout << -1;
        else cout << cnt;
    }

    return 0;
}