#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool pos = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x < 0) {
                pos = false;
            }
        }
        if (pos) {
            cout << "YES\n" << "101\n";
            for (int i = 0; i <= 100; i++)cout << i << " ";
            cout << "\n";
        }
        else cout << "NO\n";
    }

    return 0;
}