#include <iostream>

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
        int c[3] = { 0 };
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] % 3;

            c[a[i]]++;
        }

        int k = n / 3;

        int ans = 0;

        for (int i = 0; i < 3; i++)
            c[i] = c[i] - k;

        for (int i = 0; c[0] != 0 || c[1] != 0 || c[2] != 0; i = (i + 1) % 3)
        {
            if (c[i] > 0)
            {
                ans += c[i];
                c[(i + 1) % 3] += c[i];
                c[i] = 0;
            }
        }
        cout << ans << endl;

        delete[] a;
    }

    return 0;
}