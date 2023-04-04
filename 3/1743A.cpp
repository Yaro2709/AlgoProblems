#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, k = 0;

        cin >> n;
        int* a = new int[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        for (int i = 1; i < 10 - n; i++) {
            k = i * 6 + k;
        }

        cout << k << endl;

        delete[] a;
    }

    return 0;
}