#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int l = n * (a - b);
        int r = n * (a + b);
        cout << (r < c - d or c + d < l ? "No" : "Yes") << '\n';
    }
    return 0;
}