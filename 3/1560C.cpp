#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num = sqrt(n);

        if (num * num == n) {
            cout << num << " " << 1 << endl;
            continue;
        }

        n -= (num * num);
        if (n <= (2 * num + 1) / 2) {
            cout << n << " " << num + 1 << endl;
        }
        else {
            cout << num + 1 << " " << 2 * num + 1 - n + 1 << endl;;
        }
    }

    return 0;
}