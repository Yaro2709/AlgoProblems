#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string S, T;
    cin >> S >> T;
    S += '0'; T += '0';
    vector<int> left, right;
    for (int i = 1; i <= n; ++i) {
        if (S[i] != S[i - 1]) left.push_back(i);
        if (T[i] != T[i - 1]) right.push_back(i);
    }
    reverse(right.begin(), right.end());
    for (int x : right) left.push_back(x);
    cout << left.size() << " ";
    for (int x : left) cout << x << " ";
    cout << "\n";
}

int main() {
    int step;
    cin >> step;
    ++step;
    while (--step) {
        solve();
    }

    return 0;
}