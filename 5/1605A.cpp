#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b - 2 * c) % 3)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}