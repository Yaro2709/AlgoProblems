#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s, str, s2;
    cin >> s >> str;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            s2 = s[i];
            s.insert(0, s2);
            s.erase(i + 1, 1);
            break;
        }
    }
    if (s == str) cout << "OK";
    else cout << "WRONG_ANSWER";
    return 0;
}