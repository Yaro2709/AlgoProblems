#include<iostream>

using namespace std;

int main() {
    long long int i = 0, k = 0, m, s1 = 0, j, n, r = 0, l = 1, l1, c, b, d;
    cin >> n;
    int *a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) c = i;
        if (a[i] == n) d = i;
    }

    if (c < d) {
        k = max(d, n - 1 - c);
    }
    if (c > d) {
        k = max(c, n - 1 - d);
    }
    cout << k;

    delete[] a;

    return 0;
}