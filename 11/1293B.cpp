#include <iostream>

using namespace std;

int main() {
    double n, a, i;
    cin >> n;
    for (i = n; i >= 1; i--) {
        a += (1 / i);
    }
    cout << a;

    return 0;
}