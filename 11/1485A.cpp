#include <iostream>

using namespace std;

int main() {
    int T, a, b;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        int ans = 0x3f3f3f3f;
        for (int i = 0; i < 30; i++) {

            if (b + i == 1)
                continue;
            int cnt = i;
            int x = a;
            while (x > 0) {
                x /= b + i;
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}