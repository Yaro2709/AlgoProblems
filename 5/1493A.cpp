#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int r = n - (k - 1) / 2 - 1;
        cout << r << endl;
        for (int i = (k - 1) / 2 + 1; i <= n; i++) {
            if (i == k) {
                continue;
            }
            else {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}