#include<iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i <= 4; i++) {
        if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}