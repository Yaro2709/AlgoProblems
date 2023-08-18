#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k > 30) {
            cout << n + 1 << endl;
        }
        else {
            cout << min(n + 1, 1 << k) << endl;
        }
    }

    return 0;
}