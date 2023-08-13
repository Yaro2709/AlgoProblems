#include <iostream>

using namespace std;

int main()
{
    long long int t, i, j, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int *a = new long long int[n];
        long long int sum = 0;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        i = 0;
        while (i < n && a[i] == 0) {
            i++;
        }
        for (; i < n - 1; i++) {
            if (a[i] == 0)
                sum++;
            else
                sum = sum + a[i];
        }
        cout << sum << endl;

        delete[] a;
    }

    return 0;
}