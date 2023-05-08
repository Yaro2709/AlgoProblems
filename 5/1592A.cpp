#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int b = a[n - 1] + a[n - 2];
        if (h % b == 0)
            cout << 2 * (h / b) << endl;
        else if (h % b <= a[n - 1])
            cout << 2 * (h / b) + 1 << endl;
        else
            cout << 2 * (h / b) + 2 << endl;

        delete[] a;
    }

    return 0;
}