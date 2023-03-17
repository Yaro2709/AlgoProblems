#include<iostream>

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

        int min = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (min > a[i]) {
                min = a[i];
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (a[i] - min);
        }

        cout << sum << endl;

        delete[] a;
    }

    return 0;
}