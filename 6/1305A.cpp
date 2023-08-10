#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        int* a = new int[n]; 
        for (int i = 0; i < n; ++i) cin >> a[i];
        int* b = new int[n];
        for (int j = 0; j < n; ++j) cin >> b[j];
        int *c = new int[n];
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; ++i) { cout << a[i] << " "; }
        cout << endl;
        for (int i = 0; i < n; ++i) { cout << b[i] << " "; }
        cout << endl;

        delete[] a;
        delete[] b;
        delete[] c;
    }

    return 0;
}