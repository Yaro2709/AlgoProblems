#include<iostream>

using namespace std;

void solve() {
    long long int n, k, r, c;
    cin >> n >> k >> r >> c;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if ((i + j) % k == (r + c) % k)
                cout << "X";
            else
                cout << ".";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}