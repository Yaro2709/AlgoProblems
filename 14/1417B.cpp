#include<iostream>

using namespace std;

int main() {
    int l;
    cin >> l;
    while (l--) {
        int n, t;
        cin >> n >> t;
        int *a = new int[n];
        int j = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int r;
            if (t % 2 == 0 && a[i] == t / 2) {
                r = (j++) % 2;
            }
            else if (2 * a[i] < t) {
                r = 0;
            }
            else r = 1;
            cout << r << " ";
        }
        cout << endl;

        delete[] a;
    }
    return 0;
}