#include<iostream>
#include<algorithm>

using namespace std;

int  i, j, k, l, m, n, t, s, a[1111111], b[111111], d, e, c;

int main() {
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> c >> d;
        a[i] = c * 111 - d;
        b[a[i]] ++;
    }
    sort(a, a + n);

    cout << b[a[n - k]];

    return 0;
}