#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n + 2];
        for (int i = 1; i <= n; i++) {
            a[i] = i;
        }

        cout << n << endl;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) {
                cout << a[j] << ' ';
            }
            cout << endl;
            swap(a[i], a[i + 1]);
        }

        delete[] a;
    }

    return 0;
}