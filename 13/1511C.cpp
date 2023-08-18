#include<iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--) {
        int x;
        cin >> x;
        int k;
        for (int i = 0; i < n; i++) {
            if (a[i] == x)
            {
                k = i;
                cout << i + 1 << " ";
                break;
            }
        }

        int y = a[k];
        for (int i = k; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = y;
    }

    delete[] a;

    return 0;
}