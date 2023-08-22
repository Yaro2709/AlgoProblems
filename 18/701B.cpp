#include<iostream>

using namespace std;

#define ll long long int

int h[100001], l[100001];

int main() {
    int n, m, i;
    cin >> n >> m;
    ll hnum, lnum;
    for (i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (h[x] == 0) {
            h[x] = 1;
            hnum++;
        }
        if (l[y] == 0) {
            l[y] = 1;
            lnum++;
        }
        cout << n * 1ll * n - lnum * 1ll * n - hnum * 1ll * n + lnum * 1ll * hnum << endl;
    }

    return 0;
}