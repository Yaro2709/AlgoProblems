#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (count(a.begin(), a.end(), a[0]) == n) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && a[i] != a[j]) {
                    cout << i + 1 << ' ' << j + 1 << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}