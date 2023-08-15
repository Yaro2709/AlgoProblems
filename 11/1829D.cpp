#include <iostream>

using namespace std;

bool ispossible(int n, int m) {
    if (m == n) return true;
    if (m > n || n % 3) return false;
    return ispossible(n / 3, m) || ispossible(n * 2 / 3, m);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (ispossible(n, m)) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}