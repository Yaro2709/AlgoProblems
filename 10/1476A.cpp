#include <iostream>

using namespace std;

void solve() {
    long long int n, k;
    cin >> n >> k;
    long long int a = (n + k - 1) / k;
    k *= a;
    long long int ans = (n + k - 1);
    cout << ans / n << "\n";
}

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}