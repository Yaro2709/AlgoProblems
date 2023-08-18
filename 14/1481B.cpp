#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int j;
        for (int i = k; i > 0; i--) {
            for (j = 0; j < n - 1 && a[j] >= a[j + 1]; j++) {}
            a[j]++;
            if (j == n - 1) { break; }
        }
        if (j < n - 1) { cout << j + 1 << endl; }
        else { cout << -1 << endl; }

        delete[] a;
    }

    return 0;
}