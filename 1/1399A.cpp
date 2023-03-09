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

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int flag = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) > 1) {
                flag = 1;
            }
        }

        if (flag == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

        delete[] a;
    }

    return 0;
}