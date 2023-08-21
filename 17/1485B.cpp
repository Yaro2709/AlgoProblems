#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, q, k;
    cin >> n >> q >> k;
    vector<int>a(n);
    for (auto& x : a) cin >> x;

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << (a[r] - a[l]) - (r - l) * 2 + k - 1 << '\n';
    }

    return 0;
}