#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n), cnt(n + 1);
        set<int> st;
        for (int& a : v) cin >> a, st.insert(a);
        int mn = n + 5;
        for (int i = 1; i < n; i++) {
            if (v[i - 1] != v[i]) cnt[v[i]]++;
        }
        for (int a : st) {
            if (a != v.back()) cnt[a]++;
            mn = min(mn, cnt[a]);
        }
        cout << mn << endl;
    }
    return 0;
}