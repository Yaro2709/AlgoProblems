#include<iostream>
#include<vector>

using namespace std;

void solve() 
{
    int n, m;
    cin >> n;
    n += 2;
    vector<int> a(n, 0);
    for (int i = 1; i + 1 < n; i++) {
        cin >> a[i];
    }
    long long sum = 0;
    for (int i = 0; i + 1 < n; i++) {
        sum += abs(a[i + 1] - a[i]);
    }
    long long rem = 0;
    for (int i = 1; i + 1 < n; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            rem += a[i] - max(a[i - 1], a[i + 1]);

    }
    sum -= rem;
    cout << sum;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
        cout << '\n';
    }

    return 0;
}