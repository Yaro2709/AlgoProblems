#include<iostream>
#include<set>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    set<char> st;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }
    int sz = st.size();
    bool res = true;
    for (int i = 0; i < n - sz; i++) {
        if (s[i] != s[i + sz]) {
            res = false;
            break;
        }
    }
    if (res) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}