#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int>b;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        b.push_back(a);

    }
    sort(b.begin(), b.end());
    int j = 0;
    vector<int>a;
    for (int i = n - 1; i > 0; i--) {
        a.push_back(b[j]);
        j += i;
    }
    a.push_back(a[n - 2]);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}