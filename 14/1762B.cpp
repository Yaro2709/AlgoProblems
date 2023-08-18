#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            int x = 1;
            while (x < a[i]) {
                x *= 2;
            }
            cout << i + 1 << " " << x - a[i] << endl;
        }

        delete[] a;
    }

    return 0;
}