#include<iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 1;
        for (auto i : s) {
            ans = max(ans, i - '0');
        }

        cout << ans << endl;
    }

    return 0;
}