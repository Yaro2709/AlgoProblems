#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l;
        cin >> l;

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int* b = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (l >= a[j]) {
                    l += b[j];
                    b[j] = 0;
                }
            }
        }

        cout << l << endl;

        delete[] a;
        delete[] b;
    }

    return 0;
}