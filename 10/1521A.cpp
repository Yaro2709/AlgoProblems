#include <iostream>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
            cout << "NO" << "\n";
        else {

            cout << "YES" << "\n";

            cout << a * (b) << " " << a << " " << a * (b + 1) << " " << "\n";
        }
    }

    return 0;
}