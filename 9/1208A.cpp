#include <iostream>

using namespace std;

int main() {
    long long int a, b, n, t, fib[4];
    cin >> t;
    while (t--) {
        cin >> fib[0] >> fib[1] >> n;
        fib[2] = fib[0] ^ fib[1];
        cout << fib[n % 3] << endl;
    }

    return 0;
}