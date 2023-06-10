#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (n + 6) * (n - 4) + 26 << '\n';
    }
    return 0;
}
