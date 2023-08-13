#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 2) cout << 1 << " " << 2;
        else if (n == 1) cout << 1;
        else if (n % 2 == 1) cout << -1;
        else {
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) cout << n + 2 - i << " ";
                else cout << n - i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}