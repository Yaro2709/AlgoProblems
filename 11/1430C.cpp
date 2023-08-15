#include <iostream>

using namespace std;

void solve() {
    int  n;
    cin >> n;
    cout << 2 << endl;
    int last = 0;
    for (int i = n; i > 1; i--) {
        if (last == 0) {
            last = n;
            cout << n << " " << n - 1 << endl;
        }
        else {
            cout << last << " " << i - 1 << endl;
            last = (i + last) / 2;
        }
    }
}

int main() {
    int T; 
    cin >> T;
    while (T--)
        solve();

    return 0;
}