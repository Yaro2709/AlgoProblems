#include<iostream>

using namespace std;

int main() {
    int i, n, s = 0, b = 0;
    cin >> n;
    int *a = new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if (a[i])
            b = i + 1;
    }
    if (b == 0)
        cout << "NO";
    else if (s)
        cout << "YES" << endl << 1 << endl << 1 << " " << n;
    else
        cout << "YES" << endl << 2 << endl << 1 << " " << b - 1 << endl << b << " " << n;

    delete[] a;

    return 0;
}