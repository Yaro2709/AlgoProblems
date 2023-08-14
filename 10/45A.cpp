#include <iostream>

using namespace std;

int n, a;
string s1[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }, s2;

int main() {
    cin >> s2 >> n;
    if (s2 == "December" && n == 1) cout << "January";
    if (s2 == "February" && n == 11) cout << "January";
    for (int i = 0; i < 12; i++) {
        if (s2 == s1[i]) {
            if (i + n > 12) { a = (i + n) / 12; i = i + n - (12 * a); }
            else i = i + n;
            cout << s1[i]; return 0;
        }
    }

    return 0;
}