#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;
        long long int mx = min(x, y);
        long long int k = (mx * b) + (max(x, y) - mx) * a;
        long long int p = x * a + y * a;
        cout << min(k, p) << endl;
    }

    return 0;
}