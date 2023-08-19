#include<iostream>

using namespace std;

int main() {
    int n, q, p;
    string s;
    cin >> n >> q;
    cin >> s;
    int t = 0;
    for (int i = 0; i < n; ++i) {
        if (s.substr(i, 3) == "abc") ++t;
    }
    while (q--) {
        char ch;
        cin >> p >> ch;
        --p;
        if (p >= 2 && s.substr(p - 2, 3) == "abc") --t;
        if (p >= 1 && s.substr(p - 1, 3) == "abc") --t;
        if (s.substr(p, 3) == "abc") --t;
        s[p] = ch;
        if (p >= 2 && s.substr(p - 2, 3) == "abc") ++t;
        if (p >= 1 && s.substr(p - 1, 3) == "abc") ++t;
        if (s.substr(p, 3) == "abc") ++t;
        cout << t << '\n';
    }

    return 0;
}