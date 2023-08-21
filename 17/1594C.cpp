#include<iostream>

using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int i, n, k = -1, m, f = 0, s = 0, d = 0;
        string t;
        char c;
        cin >> n >> c >> t;
        for (int i = 0; i < n; i++)
            if (t[i] != c)f = 1;
        if (!f)cout << 0 << endl;
        else {
            for (int i = n / 2, j; i < n; i++) {

                if (t[i] == c) { k = i + 1; break; }
            }
            if (k != -1) {
                cout << 1 << endl;
                cout << k << endl;
            }
            else {
                if (t[n - 1] != c) {
                    cout << 2 << endl;
                    cout << n << " " << n - 1 << endl;
                }
                else {
                    cout << 1 << endl;
                    cout << n << endl;
                }
            }
        }
    }

    return 0;
}