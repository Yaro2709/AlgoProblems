#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int i, t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        for (i = n - 1; i >= 0; i--) {
            if (a[i] <= n - i)
                break;
        }

        if (a[i] < n - i)
            i++;
        cout << n - i << endl;

        delete[] a;
    }

    return 0;
}