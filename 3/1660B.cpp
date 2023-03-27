#include<iostream>
#include <algorithm>

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

        sort(a, a + n);
        if (n == 1) {
            cout << ((a[0] == 1) ? "YES" : "NO") << endl;
        }
        else {
            cout << ((a[n - 1] - a[n - 2] < 2) ? "YES" : "NO") << endl;
        }

        delete[] a;
    }

    return 0;
}