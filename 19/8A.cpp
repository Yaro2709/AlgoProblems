#include<iostream>
#include<string>

using namespace std;

int main() {
    string s, a, b;
    cin >> s >> a >> b;
    bool ok[2] = { false, false };
    for (int i = 0; i < 2; ++i) {
        int p1 = s.find(a);
        if (p1 != string::npos) {
            int p2 = s.find(b, p1 + a.size());
            ok[i] = p2 != string::npos;
        }
        reverse(begin(s), end(s));
    }
    if (ok[0] && ok[1]) {
        cout << "both\n";
    }
    else if (ok[0]) {
        cout << "forward\n";
    }
    else if (ok[1]) {
        cout << "backward\n";
    }
    else {
        cout << "fantasy\n";
    }
    return 0;
}