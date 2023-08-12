#include <iostream>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << (n % 2020 <= n / 2020 ? "YES" : "NO") << endl;
    }
}