#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n == 1) {
        cout << "0\n";
        return 0;
    }

    cout << min(a, b) + (n - 2) * min(a, min(b, c)) << "\n";

    return 0;
}