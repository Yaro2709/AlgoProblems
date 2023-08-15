#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == 0) {
                    cout << "W";
                }
                else {
                    cout << "B";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}