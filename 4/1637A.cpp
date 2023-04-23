#include <iostream>

using namespace std;

bool isSorted(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }

    return true;
}

void solve() 
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (isSorted(a, n)) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    delete[] a;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}