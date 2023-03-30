#include <iostream>

using namespace std;

int main() {
    string s;
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        int left = 0, right = s.length() - 1;
        char c = (s.length() - 1) + 'a';
        bool exitflag = false;

        while (left <= right) {
            if (s[left] == c) {
                ++left;
            }
            else if (s[right] == c) {
                --right;
            }
            else {
                exitflag = true;
            }
            --c;
        }

        if (c == 'a' - 1 && !exitflag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}