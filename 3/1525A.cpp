#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        for (int i = 1; i <= 100; ++i) {
            if ((k * i) % 100 == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}