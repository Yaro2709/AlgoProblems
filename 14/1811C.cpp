#include<iostream>

using namespace std;

const int N = 200010;
int a[N];

void solve() {
    int n; cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    cout << a[1] << " ";
    for (int i = 1; i < n - 1; i++) {
        cout << min(a[i], a[i + 1]) << " ";
    }
    cout << a[n - 1] << endl;
}

int main() {
    int T; 
    cin >> T;
    while (T--) solve();

    return 0;
}