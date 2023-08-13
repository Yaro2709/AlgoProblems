#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int mn = a[0];
        for (int i = 0; i < n; i++) mn = min(mn, a[i]);
        int res = 0;
        for (int i = 0; i < n; i++) res += ((a[i] - 1) / (2 * mn - 1));
        cout << res << endl;

        delete[] a;
    }

    return 0;
}