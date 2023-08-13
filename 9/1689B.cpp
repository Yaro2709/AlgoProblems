#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = i + 1;
        }
        if (n == 1) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i] && i != n - 1) swap(b[i], b[i + 1]);
            else if (i == n - 1 && a[i] == b[i]) swap(b[i], b[i - 1]);

        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;

        delete[] a;
        delete[] b;
    }

    return 0;
}