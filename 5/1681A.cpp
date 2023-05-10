#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        int* b = new int[m];
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int maxA = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] > maxA) {
                maxA = a[i];
            }
        }

        int maxB = INT_MIN;
        for (int i = 0; i < m; i++) {
            if (b[i] > maxB) {
                maxB = b[i];
            }
        }

        if (maxA > maxB) {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        if(maxA < maxB) {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        if (maxA == maxB) {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }

        delete[] a;
        delete[] b;
    }

    return 0;
}