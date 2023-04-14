#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = 0;
        int ar = 0;
        for (int i = 0; i < n; i++) {
            ar = sqrt(a[i]);
            if (ar * ar == a[i]) {
                c++;
            }
        }

        if (c == n) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

        delete[] a;
    }

    return 0;
}