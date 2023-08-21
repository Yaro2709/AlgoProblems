#include <iostream>

using namespace std;

int main() {
    long long int n, d = 0, x = 9;
    cin >> n;
    d += n;
    while (n > x) {
        n -= x;
        d += n;
        x *= 10;
    }
    cout << d << '\n';

    return 0;
}