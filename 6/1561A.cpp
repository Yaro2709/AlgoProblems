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
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int count = 0;
        while (!is_sorted(a, a + n))
        {
            for (int j = count % 2; j < n - 1; j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
            count++;
        }
        cout << count << endl;

        delete[] a;
    }

    return 0;
}