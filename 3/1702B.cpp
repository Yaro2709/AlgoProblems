#include <iostream>
#include <set>

using namespace std;

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        set<char> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
            if (st.size() > 3) {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}