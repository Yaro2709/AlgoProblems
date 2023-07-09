#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
        if (s1.find(s) != string::npos) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}