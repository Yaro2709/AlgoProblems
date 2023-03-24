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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int t = 0;
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0) {
                t++;
            }
            else {
                l++;
            }
        }

        cout << min(t, l) << endl;

        delete[] a;
    }

    return 0;
}