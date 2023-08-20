#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = (n - a[0]) % n;
    a[0] = 0;
    for (int i = 1; i < n; i++) {
        if (i % 2) {
            a[i] = (a[i] - x + n) % n;
        }
        else {
            a[i] = (a[i] + x + n) % n;
        }
        if (a[i] - a[i - 1] != 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    delete[] a;

    return 0;
}