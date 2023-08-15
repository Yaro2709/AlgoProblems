#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[2 * n];
        int s = 0, z = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a, a + 2 * n);

        cout << a[n] - a[n - 1] << endl;

        delete[] a;
    }

    return 0;
}