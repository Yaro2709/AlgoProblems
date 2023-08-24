#include<iostream>

using namespace std;

int main() {
    int T, n, a, b;
    for (cin >> T; T; T--) {
        cin >> n;
        a = 1, b = n - 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = n / i, b = n - n / i;
                break;
            }
        }
        cout << a << " " << b << "\n";
    }
    return 0;
}