#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int m;
    cin >> m;
    int* c = new int [m];
    int* d = new int [m];
    for (int i = 0; i < m; i++) {
        cin >> c[i] >> d[i];
    }
    sort(a, a + n);
    sort(d, d + m);
    sort(b, b + n);
    sort(c, c + m);
    int ans = c[m - 1] - b[0];
    int temp = a[n - 1] - d[0];
    if (ans <= 0) {
        ans = 0;
    }
    cout << max(ans, temp) << endl;

    delete[] a;
    delete[] b;
    delete[] c;
    delete[] d;

    return 0;
}