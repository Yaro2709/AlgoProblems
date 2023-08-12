#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int *a = new int[n];
        bool b = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != i + 1) b = false;
        }
        if (b) cout << "0\n";
        else if (a[0] == 1 || a[n - 1] == n) cout << "1\n";
        else if (a[0] == n && a[n - 1] == 1) cout << "3\n";
        else cout << "2\n";

        delete[] a;
    }

    return 0;
}