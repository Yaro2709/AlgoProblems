#include<iostream>

using namespace std;

void solve() {
    string str;
    cin >> str;
    int s = 0;
    for (int i = 0; i < str.size(); i++) {
        if (s and str[i] == 'B') {
            s--;
        }
        else {
            s++;
        }
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}