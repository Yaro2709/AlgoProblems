#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> d >> n;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        ans += d - num;
    }
    cout << ans << endl;

    return 0;
}