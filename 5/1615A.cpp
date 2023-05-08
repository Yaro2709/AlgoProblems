#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int top = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            top += a;
        }

        if (top % n == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }

    return 0;
}