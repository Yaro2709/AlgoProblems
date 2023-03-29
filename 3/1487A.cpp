#include <iostream>
#include <algorithm>

using namespace std;

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int* a = new int[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a, a + n);

        int max = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }

        int c = 0;
        for (int i = 0; i < n; i++) {
            if (a[0] == a[i]) {
                c++;
            }
        }
        cout << n - c << endl;

        delete[] a;
    }
    return 0;
}