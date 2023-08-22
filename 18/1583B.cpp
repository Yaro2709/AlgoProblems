#include<iostream>
#include<cstring>

using namespace std;

const int N = 1e5 + 10;
bool st[N];

int main() {
    int T, n, m;
    cin >> T;
    while (T--) {
        memset(st, 0, sizeof(st));
        cin >> n >> m;
        int t = 1;
        for (int i = 1; i <= m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            st[b] = 1;
        }
        for (int i = 1; i <= n; i++)
            if (!st[i]) {
                t = i;
                break;
            }
        for (int i = 1; i <= n; i++)
            if (i != t) cout << t << ' ' << i << endl;
    }

    return 0;
}