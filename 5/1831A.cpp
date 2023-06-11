#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int w = 0; w < t; w++) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            cout << (n + 1 - a) << ' ';
        }
        cout << endl;
    }

    return 0;
}