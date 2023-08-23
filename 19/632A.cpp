#include<iostream>

using namespace std;

bool t[41];

int main() {
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        t[i] = ((int)s.size() - 4);
    }
    long long ans = 0, a = 0;
    for (int i = n - 1; i >= 0; i--) {
        a *= 2;
        a += t[i];
        ans += (a / 2) * p + (a % 2) * (p / 2);
    }
    cout << ans << endl;

    return 0;
}