#include<iostream>

using namespace std;

void solve() {
    int n, i = 0, op = 0, del = 0;
    cin >> n;
    string s, temp;
    cin >> s;
    while (i < n) {
        temp += s[i];
        if (temp == "()" || temp == "((" || temp == "))") {
            temp = "";
            del += 2;
            op++;
        }
        else if (temp.size() > 2 && s[i] == ')') {
            del += temp.size();
            op++;
            temp = "";
        }
        i++;
    }
    cout << op << " " << n - del << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}