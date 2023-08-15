#include <iostream>

using namespace std;

int main() {
    long long int T, n, x, t;
    cin >> T;
    while (T--) {
        cin >> n >> x >> t;
        long long tmp = min(t / x, n);
        cout << (n - tmp) * tmp + tmp * (tmp - 1) / 2 << '\n';
    }

    return 0;
}