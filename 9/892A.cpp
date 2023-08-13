#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n, sum = 0, x, i;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum = sum + x;
    }
    long long int *a = new long long int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    if (a[n - 1] + a[n - 2] >= sum) cout << "YES";
    else                            cout << "NO";

    delete[] a;

    return 0;
}