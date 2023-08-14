#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        long long int n;
        cin >> n;
        long long int i = 1, j = 3;
        long long int sum = 0;
        for (; i <= n / 2; i++) {
            sum += (i * (4 * j - 4));
            j += 2;
        }
        cout << sum << endl;
    }

    return 0;
}