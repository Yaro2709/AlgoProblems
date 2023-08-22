#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), f(2e5 + 10);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int s = a[i] + a[j];
            f[s]++;
            ans = max(ans, f[s]);
        }
    }
    cout << ans << "\n";
    return 0;
}