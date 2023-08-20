#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    long  n, k;
    cin >> n >> k;
    long *s = new long[n + 5];
    for (long i = 1; i <= n; i++)
        cin >> s[i];
    s[n + 1] = 0;
    sort(s + 1, s + n + 1);
    if (k == 0) {
        if (s[1] > 1)
            cout << 1;
        else cout << -1;
    }
    else {
        if (s[k] == s[k + 1])
            cout << "-1";
        else cout << s[k];
    }

    return 0;
}