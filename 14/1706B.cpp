#include<iostream>

using namespace std;

int c[200000];
int last[200000];
int sol[200000];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        last[i] = -1;
        sol[i] = 0;
    }
    last[n] = -1;
    sol[n] = 0;
    for (int i = 0; i < n; ++i) {
        if (last[c[i]] == -1) {
            last[c[i]] = i;
            sol[c[i]]++;
            continue;
        }
        int dif = i - last[c[i]];
        if (dif % 2 == 1)++sol[c[i]];
        last[c[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << sol[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}