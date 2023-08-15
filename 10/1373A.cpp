#include <iostream>

using namespace std;

int main() {
    int t;
    long long int a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a >= c) cout << -1;
        else cout << 1;
        cout << ' ';

        if (a * b > c) cout << b << endl;
        else cout << -1 << endl;
    }

    return 0;
}