#include <iostream>

using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;
    if (2 * k >= n) { 
        cout << "NO" << endl; 
        return; 
    }
    for (int i = 0; i < k; i++) {
        if (s[i] != s[n - i - 1]) { 
            cout << "NO" << endl; 
            return; 
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}