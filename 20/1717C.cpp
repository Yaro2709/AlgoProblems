#include<iostream>
#include<vector>

using namespace std;

void solve(long long int ttt) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (a[i] > b[i] || b[i] - 1 > b[(i + 1) % n]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    long long int t = 1, T = 1;
    cin >> T;
    t = T;
    while (T--) {
        solve(t - T);
    }
    return 0;
}