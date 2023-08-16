#include <iostream>

using namespace std;

int main() {
    long long int n, m, x, cur, ans;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (cur + x > m) {
            cur = 0;
            ans++;
            cur = x;
        }
        else
            cur += x;
    }
    cout << ans + 1;

    return 0;
}