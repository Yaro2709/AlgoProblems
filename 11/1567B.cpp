#include <iostream>

using namespace std;

int s[300010];

int main() {
    s[0] = 0;
    for (int i = 1; i <= 300000; i++) {
        s[i] = s[i - 1] ^ i;
    }

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (s[a - 1] == b) cout << a << endl;
        else if (s[a - 1] != b) {
            if ((s[a - 1] ^ b) != a) cout << a + 1 << endl;
            else cout << a + 2 << endl;
        }
    }

    return 0;
}