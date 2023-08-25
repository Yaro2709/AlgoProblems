#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n, 0);
    string S;
    cin >> S;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        --x;
        A[x]++;
    }
    for (int i = n - 2; i >= 0; --i) A[i] += A[i + 1];
    for (int i = 0; i < n; ++i) ++A[i];
    vector<int> hash(29, 0);
    for (int i = 0; i < n; ++i) {
        hash[S[i] - 'a'] += A[i];
    }
    for (int i = 0; i < 26; ++i) cout << hash[i] << " ";
    cout << "\n";
}

int main() {
    int step;
    cin >> step;
    ++step;
    while (--step) solve();

    return 0;
}