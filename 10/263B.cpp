#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (k <= n) {
        cout << a[n - k] << " " << a[n - k] << endl;
    }
    else {
        cout << -1 << endl;
    }

    delete[] a;

    return 0;
}