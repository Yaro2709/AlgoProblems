#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int t;
    cin >> t;
    int* b = new int[t];
    for (int i = 0; i < t; i++) {
        cin >> b[i];
    }

    int max_a = 0;
    for (int i = 0; i < n; i++) {
        if (max_a < a[i]) {
            max_a = a[i];
        }
    }

    int max_b = 0;
    for (int i = 0; i < t; i++) {
        if (max_b < b[i]) {
            max_b = b[i];
        }
    }

    cout << max_a << " " << max_b << endl;

    delete[] a;
    delete[] b;

    return 0;
}