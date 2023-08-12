#include <iostream>

using namespace std;

int main() {
    int ans = 0, a;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) ans ^= i;
    for (int i = 0; i < n - 1; i++) {
        cin >> a; ans ^= a;
    }
    cout << ans << endl;

    return 0;
}