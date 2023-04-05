#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, s, r;
        cin >> n >> s >> r;

        int *a = new int[n];

        a[0] = s - r;
        for (int j = 1; j < n; j++) {
            a[j] = r / (n - 1);
        }

        int k = 1;
        for (int j = 1; j <= r % (n - 1); j++) {
            a[k]++;
            k++;
        }

        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;

        delete[] a;
    }

    return 0;
}