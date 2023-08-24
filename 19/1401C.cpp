#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        bool f = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] % b[0] != 0 && a[i] != b[i]) f = 0;
        }
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}