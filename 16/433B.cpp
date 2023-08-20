#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n, 0);
    vector<long long> sum(n + 1, 0), ssum(n + 1, 0);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 1; i <= n; ++i) sum[i] = sum[i - 1] + A[i - 1];
    sort(A.begin(), A.end());
    for (int i = 1; i <= n; ++i) ssum[i] = ssum[i - 1] + A[i - 1];
    int query;
    cin >> query;
    ++query;
    while (--query) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << sum[r] - sum[l - 1] << "\n";
        }
        else {
            cout << ssum[r] - ssum[l - 1] << "\n";
        }
    }

    return 0;
}