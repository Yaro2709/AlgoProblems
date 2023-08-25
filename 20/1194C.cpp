#include<iostream>

using namespace std;

int main() {
    int q; cin >> q;
    while (q--) {
        string s, t, p;
        cin >> s >> t >> p;
        int n1 = s.size();
        int n2 = t.size();
        int n3 = p.size();
        int a[26] = { 0 };
        for (int i = 0; i < n3; ++i)a[p[i] - 'a']++;
        int temp = 0, c = 0; bool fl = 0;
        while (1) {
            if (c == n1 && temp == n2) { fl = 1; break; }
            if (temp == n2)break;
            if (s[c] != t[temp]) {
                if (a[t[temp] - 'a'] == 0) { break; }
                a[t[temp] - 'a']--;
            }
            else c++;
            temp++;
        }
        if (fl)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}