#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int *a = new int[n + 1];
    a[n] = 101;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x = 0;
    sort(a, a + n + 1);
    while (a[0] != k) {
        for (int i = 1; i <= n; i++) {
            if (a[i] != a[i - 1] && a[i - 1] != k) {
                a[i - 1]++;
            }
        }
        x++;
        sort(a, a + n);
    }
    cout << x;
    
    delete[] a;

    return 0;
}