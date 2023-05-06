#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int len;
        cin >> len;

        int x;
        int ans = 0;
        for (int i = 1; i <= len; i++) {
            cin >> x;
            ans |= x;
        }

        cout << ans << endl;
    }

    return 0;
}