#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long c = 1e9 + 7;
        long long n;
        cin >> n;

        long long d = ((((((n * (n + 1)) % c) * (4 * n - 1)) % c) * 337) % c);
        cout << d << endl;
    }

    return 0;
}