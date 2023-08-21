#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char** a = new char* [n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new char[m];
        }
        int f = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                int sum = (a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1] - (4 * '0'));
                if (sum == 3) { f = 1; break; }
            }
            if (f) { break; }
        }
        if (f) cout << "NO\n";
        else  cout << "YES\n";

        for (int i = 0; i < n; i++)
        {
            delete[] a[i]; 
        }
        delete[] a; 
    }
    return 0;
}