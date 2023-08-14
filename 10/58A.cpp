#include <iostream>

using namespace std;

int main() {
    string s = "", s1 = "hello";
    int x = 0;
    while (cin >> s) {
        x = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s1[x]) {
                x++;
            }
        }
        if (x == 5) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    return 0;
}