#include<iostream>

using namespace std;

int main()
{
    int n, m, a[100001], b[100001], i, j = 0, k, c, sum = 0;
    cin >> n >> m >> c;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < m; i++) cin >> b[i];

    for (i = 0; i < n; i++) {
        if (i < m) sum += b[i];
        if (i + m > n) { sum -= b[j++]; }
        a[i] += sum;
        a[i] %= c;
    }
    for (i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}