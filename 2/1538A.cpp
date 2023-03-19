#include <iostream>

using namespace std;

void solve() {
    int n, mi = 0, ma = 0, max_ele = 0, min_ele = INT_MAX;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_ele) {
            max_ele = a[i];
            ma = i;
        }
        if (a[i] < min_ele) {
            min_ele = a[i];
            mi = i;
        }
    }
    cout << min(min(ma + 1 + n - mi, mi + 1 + n - ma), min(max(mi, ma) + 1, n - min(mi, ma))) << endl;

    delete[] a;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}