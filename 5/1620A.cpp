#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int x = count(s.begin(), s.end(), 'N');
        cout << (x == 0 || x >= 2 ? "YES\n" : "NO\n");
    }

    return 0;
}